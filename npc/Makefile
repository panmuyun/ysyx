VERILATOR_FLAGS=--cc --exe --build -j 0 -Wall --trace

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator $(VERILATOR_FLAGS) top_main.cpp top.v

wave:
	obj_dir/Vtop
	gtkwave wave.vcd
    
.PHONY: clean

clean:
	rm -rf obj_dir

include ../Makefile
