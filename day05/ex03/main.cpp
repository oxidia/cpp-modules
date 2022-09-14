#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
    Intern someRandomIntern;
    Form *rrf;

    rrf = someRandomIntern.makeForm("robo tomy request", "Bender");

    if (rrf != NULL)
        std::cout << rrf->getName() << std::endl;
    delete rrf;
    return (0);
}
