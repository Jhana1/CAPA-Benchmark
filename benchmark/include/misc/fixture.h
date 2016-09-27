#pragma once
// Project Headers
#include "bench.h"
#include "benchInfo.h"

// Third Party Headers
#include "hayai/hayai.hpp"


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
