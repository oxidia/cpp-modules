#pragma once

#include "Form.hpp"
#include <string>
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
    std::string _target;

protected:
    void action(void) const;

public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

    const std::string &getTarget(void) const;
};
