VERILATOR_FLAGS=--cc --exe --build -j 0 -Wall --trace

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator $(VERILATOR_FLAGS) test_our/top_main.cpp test_our/top.v

run:
	obj_dir/Vtop

wave:
	gtkwave wave.vcd
    
.PHONY: clean

clean:
	rm -rf obj_dir
	rm wave.vcd

include ../Makefile
