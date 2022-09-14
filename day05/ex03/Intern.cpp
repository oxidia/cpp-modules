#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formsNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *forms[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
    const int size = 3;
    int formIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (formsNames[i] == formName)
            formIndex = i;
        else
            delete forms[i];
    }

    if (formIndex == -1)
    {
        std::cout << "Intern failed to create form, '" << formName << "' doesn't exist." << std::endl;

        return NULL;
    }

    std::cout << "Intern creates " << forms[formIndex]->getName() << std::endl;
    return forms[formIndex];
}
