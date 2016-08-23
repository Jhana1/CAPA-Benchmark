benchmark: host.cu
	nvcc host.cu -ccbin clang++ -Iinclude -I/usr/local/repos/eigen/ -L/usr/local/cuda/lib -l cublas -Xcudafe "--diag_suppress=boolean_controlling_expr_is_constant" -m64 --compiler-options=-fno-vectorize -o ./build/Benchmark

debug: host.cu
	nvcc -g host.cu -ccbin g++-4.9 -Iinclude -I/usr/local/repos/eigen/ -L/usr/local/cuda/lib -l cublas -Xcudafe "--diag_suppress=boolean_controlling_expr_is_constant" --std=c++11 -m64 -o ./build/Benchmark

