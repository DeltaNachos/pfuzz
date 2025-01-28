mutate: mutate.c mutate.h
	gcc mutate.c -o mutate

pfuzz: pfuzz.c
	gcc pfuzz.c -o pfuzz

clean:
	rm -f instr.hex max.hex max.vcd min.hex min.vcd max_track.csv min_track.csv testbench.vcd
