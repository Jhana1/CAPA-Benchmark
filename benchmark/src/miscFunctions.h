#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>

template <typename T>
void vectorFill(T *vec, size_t size);

template <typename T>
void vectorPrint(T *vec, size_t size);

timespec diffTime(const timespec&, const timespec&);

#include "miscFunctions.hpp"
