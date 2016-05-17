CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(benchmark)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)
FIND_PACKAGE(CUDA REQUIRED)

INCLUDE(FindCUDA)

INCLUDE_DIRECTORIES(/usr/local/cuda/include
                    /usr/local/cuda/samples/common/inc)

FILE(GLOB SOURCES "*.cu" "*.cpp" "*.c" "*.h" "*.cuh" "*.hpp")
CUDA_ADD_EXECUTABLE(lbmslv ${SOURCES})

LIST(APPEND CMAKE_CXX_FLAGS "-std=c++11 -Wall -Werror")

LIST(APPEND CUDA_NVCC_FLAGS --compiler-options -fno-strict-aliasing -lineinfo -use_fast_math -Xptxas -dlcm=cg)
LIST(APPEND CUDA_NVCC_FLAGS -gencode arch=compute_20,code=sm_20)
LIST(APPEND CUDA_NVCC_FLAGS -gencode arch=compute_30,code=sm_30)
LIST(APPEND CUDA_NVCC_FLAGS -gencode arch=compute_35,code=sm_35)

TARGET_LINK_LIBRARIES(lbmslv /usr/local/cuda/lib64/libcudart.so )

