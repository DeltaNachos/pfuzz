mutate: mutate.c mutate.h
	gcc mutate.c -o mutate

pfuzz: pfuzz.c mutate.c mutate.h
	gcc pfuzz.c mutate.c -o pfuzz

clean:
	rm -f instr.hex max.hex max.vcd min.hex min.vcd max_track.csv min_track.csv testbench.vcd
