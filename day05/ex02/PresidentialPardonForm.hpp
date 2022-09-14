#pragma once

#include "Form.hpp"
#include <string>
#include <fstream>
#include <cstdlib>

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

protected:
    void action(void) const;

public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

    const std::string &getTarget(void) const;
};
