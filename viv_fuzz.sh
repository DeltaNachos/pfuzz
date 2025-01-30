#!/bin/bash

# Number of iterations (how many times to run the script)
iterations=120
max_dynamic=-1.0 # Initialize with small value
max_dynamic_it=0
max_dynamic_file=""

for i in $(seq 1 $iterations); do
  # Generate the firmware.mem file
  rm firmware.mem
  ./mutate -g 16 >> firmware.mem
  echo 8082 >> firmware.mem

  # Copy the firmware.mem file to Windows
  rm -r /mnt/c/Xilinx/Projects/picorv32/picorv32.ip_user_files/mem_init_files
  cp firmware.mem /mnt/c/Xilinx/Projects/picorv32/picorv32.ip_user_files/firmware.mem

  # Run the Windows script
  output=$(/mnt/c/Windows/System32/cmd.exe /c "C:/Xilinx/Vivado/2024.1/bin/vivado.bat -mode tcl -source C:/Xilinx/Projects/picorv32/picorv32.ip_user_files/fuzz.tcl")

  # Extract the value using grep and awk
  value=$(echo "$output" | grep "| Dynamic (W)" | awk '{print $5}')

  # Check if the value was found
  if [[ -n "$value" ]]; then
    echo "Iteration $i: Dynamic (W) = $value"

    # Convert value to a floating-point number for comparison
    value_float=$(bc <<< "$value")

    if (( $(bc <<< "$value_float > $max_dynamic") )); then # Compare floats
        max_dynamic=$value_float
        max_dynamic_it=$i
        max_dynamic_file="/mnt/c/Xilinx/Projects/picorv32/picorv32.ip_user_files/best_firmware.mem" # Store the path
        cp firmware.mem /mnt/c/Xilinx/Projects/picorv32/picorv32.ip_user_files/best_firmware.mem # Copy best file
        echo "New maximum dynamic found: $max_dynamic"
    fi
  else
    echo "Iteration $i: Dynamic (W) not found in output."
  fi

  echo "Iteration $i complete."
done

echo "All iterations finished."
echo "Maximum Dynamic: $max_dynamic (Iteration $max_dynamic_it)"
echo "Best firmware file: $max_dynamic_file"

