template <typename T>
void vectorFill(T *vec, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        vec[i] = std::rand();
    }
}

template <typename T>
void vectorPrint(T *vec, size_t size)
{
    std::cout << "{";
    if (size > 0)
    {
        std::cout << vec[0];
    }
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << ", " << vec[i];
    }
    std::cout << "}" << std::endl;
}
