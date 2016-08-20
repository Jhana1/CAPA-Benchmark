#pragma once
// BORING
volatile double acc = 0;
#define TYPE double


// HOST REDUCTION BENCHMARKS
BENCHMARK_F(D0, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D1, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D2, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D3, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D4, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D5, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D6, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D7, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D8, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D9, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D10, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D11, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}
BENCHMARK_F(D12, HostMinReduce, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->host_reduce(binaryOp);
}

// DEVICE MIN REDUCE
BENCHMARK_F(D0, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D1, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D2, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D3, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D4, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D5, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D6, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D7, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D8, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D9, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D10, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D11, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
BENCHMARK_F(D12, DeviceMinReduceOnload, 10, 10)
{
    AAA::min<TYPE> binaryOp;
    acc += bench->device_reduce_no_onload(binaryOp);
}
