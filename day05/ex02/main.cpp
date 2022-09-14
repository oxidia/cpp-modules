#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

void testShrubberyCreationForm(void)
{
    std::cout << "Test --- ShrubberyCreationForm" << std::endl;
    try
    {
        ShrubberyCreationForm sForm("home");
        Bureaucrat br("John", 1);

        br.signForm(sForm);
        br.executeForm(sForm);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void testRobotomyRequestForm(void)
{
    std::cout << "Test --- RobotomyRequestForm" << std::endl;
    try
    {
        srand(time(NULL));
        RobotomyRequestForm rForm("home");
        Bureaucrat br("John", 1);

        br.signForm(rForm);
        br.executeForm(rForm);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void testPresidentialPardonForm(void)
{
    std::cout << "Test --- PresidentialPardonForm" << std::endl;
    try
    {
        srand(time(NULL));
        PresidentialPardonForm pForm("home");
        Bureaucrat br("John", 145);

        br.signForm(pForm);
        br.executeForm(pForm);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    testShrubberyCreationForm();
    std::cout << std::endl;
    testRobotomyRequestForm();
    std::cout << std::endl;
    testPresidentialPardonForm();
    return (0);
}
