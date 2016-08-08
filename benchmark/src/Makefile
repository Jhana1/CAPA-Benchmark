all: host.o device.o
	nvcc -o benchmark device.o host.o

device.o: device.cu
	nvcc -O2 -c device.cu -ccbin clang++

host.o: host.cpp
	clang++ -O2 -c host.cpp -I/home/james/Projects/Parallel-AAA/benchmark/include -I/usr/local/cuda/include
