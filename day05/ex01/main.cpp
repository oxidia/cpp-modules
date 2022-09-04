#include "Bureaucrat.hpp"

void test0(void)
{
    std::cout << "Test 0 -- signForm" << std::endl;

    try
    {
        Bureaucrat a("noha", 11);
        Form form("contract", 10, 5);
        a.signForm(form);
        std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test1(void)
{
    std::cout << "Test 1 -- beSigned" << std::endl;

    try
    {
        Bureaucrat a("noha", 11);
        Form form("contract", 10, 5);
        form.beSigned(a);
        std::cout << form << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
    test0();
    std::cout << std::endl;
    test1();
    return (0);
}
