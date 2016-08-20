#pragma once
#include "bench.h"
#include "benchInfo.h"
#include "hayai.hpp"

#include <iostream>

template <typename T, BenchInfo &Info>
struct BenchFixture : public ::hayai::Fixture
{
    virtual void SetUp()
    {
        this->bench = new Bench<T, Info>;
        bench->onload();
    }

    virtual void TearDown()
    {
        delete this->bench;
    }

    Bench<T, Info> *bench;
};
