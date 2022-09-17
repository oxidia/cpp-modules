#include <iostream>
#include <string>
#include "Iter.hpp"

template <typename T>
void print(const T &value)
{
    std::cout << value << std::endl;
}

int main(void)
{
    std::cout << "array of integers" << std::endl;
    int intElements[5] = {42, 21, 69, 404, 420};
    iter<int>(intElements, 5, print);

    std::cout << "array of strings" << std::endl;
    std::string stringElements[5] = {"42", "21", "69", "404", "420"};
    iter(stringElements, 5, print);
    return (0);
}
