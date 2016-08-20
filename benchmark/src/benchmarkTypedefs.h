#pragma once
// Warm Up, Vector Length, Matrix Dimensions
BenchInfo case0 = BenchInfo(10, 1, 2, 2, 2);
BenchInfo case1 = BenchInfo(10, 4, 4, 4, 4);
BenchInfo case2 = BenchInfo(10, 16, 8, 8, 8);
BenchInfo case3 = BenchInfo(10, 64, 16, 16, 16);
BenchInfo case4 = BenchInfo(10, 256, 32, 32, 32);
BenchInfo case5 = BenchInfo(10, 1024, 64, 64, 64);
BenchInfo case6 = BenchInfo(10, 4096, 128, 128, 128);
BenchInfo case7 = BenchInfo(10, 16384, 256, 256, 256);
BenchInfo case8 = BenchInfo(10, 65536, 512, 512, 512);
BenchInfo case9 = BenchInfo(10, 262144, 1024, 1024, 1024);
BenchInfo case10 = BenchInfo(10, 1048576, 2048, 2048, 2048);
BenchInfo case11 = BenchInfo(10, 4194304, 4096, 4096, 4096);
BenchInfo case12 = BenchInfo(10, 16777216, 8192, 8192, 8192);

typedef BenchFixture<double, case0> D0;
typedef BenchFixture<double, case1> D1;
typedef BenchFixture<double, case2> D2;
typedef BenchFixture<double, case3> D3;
typedef BenchFixture<double, case4> D4;
typedef BenchFixture<double, case5> D5;
typedef BenchFixture<double, case6> D6;
typedef BenchFixture<double, case7> D7;
typedef BenchFixture<double, case8> D8;
typedef BenchFixture<double, case9> D9;
typedef BenchFixture<double, case10> D10;
typedef BenchFixture<double, case11> D11;
typedef BenchFixture<double, case12> D12;

typedef BenchFixture<float, case0> F0;
typedef BenchFixture<float, case1> F1;
typedef BenchFixture<float, case2> F2;
typedef BenchFixture<float, case3> F3;
typedef BenchFixture<float, case4> F4;
typedef BenchFixture<float, case5> F5;
typedef BenchFixture<float, case6> F6;
typedef BenchFixture<float, case7> F7;
typedef BenchFixture<float, case8> F8;
typedef BenchFixture<float, case9> F9;
typedef BenchFixture<float, case10> F10;
typedef BenchFixture<float, case11> F11;
typedef BenchFixture<float, case12> F12;
