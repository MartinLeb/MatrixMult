OCL_DIR := ../../OpenCL-Wrapper/Code
INCS := "-I/usr/include -I$(OCL_DIR)/inc"
LIBS := "-L$(OCL_DIR)/lib -lOclWrapper -L/usr/lib64 -lOpenCL "

GCC_FLAGS := -std=c++0x -Wall -g -DDEBUG


TARGET:
		$(MAKE) -C matrix LIBS=$(LIBS) INCS=$(INCS) GCC_FLAGS="$(GCC_FLAGS)"

.PHONY : clean

clean :
		$(MAKE) clean -C matrix

