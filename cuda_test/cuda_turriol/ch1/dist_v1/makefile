NVCC = /usr/local/cuda-8.0/bin/nvcc 
NVCC_FLAGS = -g -G -Xcompiler -Wall
main.exe : main.cc
	$(NVCC) $(NVCC_FLAGS) $< -o $@
