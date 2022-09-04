#include "Bureaucrat.hpp"

void test0()
{
    std::cout << "Test 1 -- constructor" << std::endl;
    try
    {
        Bureaucrat b("me", 151);
        std::cout << b << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test1()
{
    std::cout << "Test 1 -- increment" << std::endl;
    try
    {
        Bureaucrat b("me", 3);
        for (int i = 1; i <= 3; i++)
        {
            std::cout << b << std::endl;
            b.incrementGrade();
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test2()
{
    std::cout << "Test 2 -- decrement" << std::endl;
    try
    {
        Bureaucrat b("me", 148);
        for (int i = 1; i <= 3; i++)
        {
            std::cout << b << std::endl;
            b.decrementGrade();
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    test0();
    std::cout << std::endl;
    test1();
    std::cout << std::endl;
    test2();
    return (0);
}
