#include <iostream>

#include "Data.hpp"
#include <cstdint>

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data data('a', 10);

    std::cout << data.getC() << std::endl;
    std::cout << data.getI() << std::endl;

    uintptr_t raw = serialize(&data);
    Data *dPtr = deserialize(raw);

    std::cout << dPtr->getC() << std::endl;
    std::cout << dPtr->getI() << std::endl;
    return (0);
}
