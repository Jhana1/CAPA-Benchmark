#pragma once
#include "bench.h"
#include "misc/fixture.h"
#include "hayai/hayai.hpp"

// Host
BENCHMARK_F(F0, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F1, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F2, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F3, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F4, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(F5, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F6, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F7, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(F8, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(F9, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
}
/*BENCHMARK_F(F10, HostMatrixMult, 100, 1)
{
    bench->host_matrix_mult();
}
*/
// Device
BENCHMARK_F(F0, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F1, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F2, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F3, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F4, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F5, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F6, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F7, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F8, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(F9, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F10, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
} 
/*BENCHMARK_F(F11, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(F12, DeviceMatrixMult, 100, 1)
{
    bench->device_matrix_mult();
}*/
