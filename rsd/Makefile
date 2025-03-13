testbench:
	verilator -O0 --cc --exe -Wno-lint -trace -I./include -I./mem_model -DSIZE_OF_THE_BUS=32 \
		--top-module rsd_top rsd_top.sv core_clk_rst.cc \
		--Mdir tb_v_dir
	$(MAKE) -C tb_v_dir -f Vrsd_top.mk
	cp tb_v_dir/Vrsd_top vrsd

clean:
	rm -rf tb_v_dir

