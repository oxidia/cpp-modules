#pragma once

#include "Form.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;

protected:
    void action(void) const;

public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    const std::string &getTarget(void) const;
};
