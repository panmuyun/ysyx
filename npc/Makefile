TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert 

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

# 运行./build/top可执行文件
default: $(BIN)

# 创建build文件夹
$(shell mkdir -p $(BUILD_DIR))  



# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)   # auto_bind.cpp的绝对路径

$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@


# project source
# 找出vsrc文件夹中的.v文件
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v") 
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)


# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk


# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""



$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))


all: default

run: $(BIN)
	@$^

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run sim




SIMULATE_DIR = ./simulate
SIM_OBJ_DIR = $(SIMULATE_DIR)/obj_dir
SIM_EXE = $(SIM_OBJ_DIR)/V$(TOPNAME)

# 创建build文件夹
$(shell mkdir -p $(SIMULATE_DIR)) 

# 找出simcsrc文件夹中的.cpp文件
SIM_CSRCS = $(shell find $(abspath ./simcsrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

$(SIM_EXE): $(SIM_CSRCS) $(VSRCS)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@rm -rf $(SIM_OBJ_DIR)
	$(VERILATOR) --cc --build -j 0 -Wall --trace \
		--top-module $(TOPNAME) $^ \
		--Mdir $(SIM_OBJ_DIR)

sim: $(SIM_EXE)
	@$^ 


#	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
#	@echo "Write this Makefile by your self."
#	verilator $(VERILATOR_FLAGS) test_our/top_main.cpp test_our/top.v


wave:
	gtkwave wave.vcd
    
include ../Makefile
