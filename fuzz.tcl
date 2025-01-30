open_project C:/Xilinx/Projects/picorv32/picorv32.xpr
update_compile_order -fileset sources_1

reset_run synth_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1
open_run synth_1 -name synth_1

launch_simulation -mode post-synthesis -type functional

#reset_switching activity -all
read_saif C:/Xilinx/Projects/picorv32/picorv32.sim/sim_1/synth/func/xsim/activity.saif
report_power

close_project
exit