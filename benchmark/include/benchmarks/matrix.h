#pragma once
#include "bench.h"
#include "misc/fixture.h"
#include "hayai/hayai.hpp"

// Host
BENCHMARK_F(F0, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F1, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F2, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F3, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F4, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(F5, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F6, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F7, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F8, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(F9, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
}
/*BENCHMARK_F(F10, HostMatrixMult, RUNS, ITERATIONS)
{
    bench->host_matrix_mult();
}
*/
// Device
BENCHMARK_F(F0, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F1, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F2, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F3, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F4, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F5, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F6, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F7, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F8, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F9, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F10, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
} 
/*BENCHMARK_F(F11, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F12, DeviceMatrixMult, RUNS, ITERATIONS)
{
    bench->device_matrix_mult();
}*/
