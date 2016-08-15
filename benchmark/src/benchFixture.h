#pragma once
#include "bench.h"
#include "hayai.hpp"

template <typename T>
struct BenchFixture : public ::hayai::Fixture
{
    virtual void SetUp()
    {
        this->bench = new Bench<T>;
    }

    virtual void TearDown()
    {
        delete this->bench;
    }

    Bench<T> *bench;
};
