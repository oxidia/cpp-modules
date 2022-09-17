#include <iostream>
#include <vector>
#include <list>
#include "easyFind.hpp"

int main(void)
{
    std::vector<int> numbers;
    // std::list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    std::cout << easyFind(numbers, 3) << std::endl;

    try
    {
        std::cout << easyFind(numbers, -1) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
