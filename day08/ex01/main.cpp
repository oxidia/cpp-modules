#include <iostream>
#include <list>
#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    std::list<int> list;

    sp.addNumber(6);
    sp.addNumber(3);

    list.push_back(17);
    list.push_back(9);
    list.push_back(11);
    // list.push_back(12); // uncomment this line to get an error

    try
    {
        sp.addRange(list.begin(), list.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
