#CMakeLists.txt to build something
cmake_minimum_required(VERSION 2.8)
find_package(CUDA QUIET REQUIRED)

#Specify Binary Name
cuda_add_executable(
    benchmark
    benchmark.cpp
    benchmarkObj.cu
    benchmarkKernels.cu
    benchmarkKernels.cuh
    miscFunctions.cpp)

link_directories(
    /home/james/NVIDIA_CUDA-7.5_Samples/common/inc )

include_directories(
    /home/james/NVIDIA_CUDA-7.5_Samples/common/inc )

# compile_commands.json for YCM
set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )

# SET STANDARD
add_compile_options(-std=c++11)
