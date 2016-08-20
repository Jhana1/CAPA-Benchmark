#pragma once
// Host
BENCHMARK_F(D0, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D1, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D2, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D3, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D4, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(D5, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D6, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D7, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
} 
BENCHMARK_F(D8, HostMatrixMult, 10, 10)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(D9, HostMatrixMult, 5, 1)
{
    bench->host_matrix_mult();
}
BENCHMARK_F(D10, HostMatrixMult, 5, 1)
{
    bench->host_matrix_mult();
}


// Device
BENCHMARK_F(D0, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D1, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D2, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D3, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D4, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(D5, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D6, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D7, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D8, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D9, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
}
BENCHMARK_F(D10, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
} 
BENCHMARK_F(D11, DeviceMatrixMult, 10, 10)
{
    bench->device_matrix_mult();
}
