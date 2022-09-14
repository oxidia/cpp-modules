
#pragma once

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
private:
public:
    Intern(void);
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();

    Form *makeForm(const std::string &formName, const std::string &target);
};
