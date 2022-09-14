#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 145, 137)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 145, 137)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->_target = other.getTarget();
    return (*this);
}

const std::string &RobotomyRequestForm::getTarget(void) const
{
    return this->_target;
}

void RobotomyRequestForm::action(void) const
{
    std::cout << "zzzzzzzzz...ZzzzzzZ" << std::endl;
    if (rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << this->getTarget() << " robotomy failed." << std::endl;
}
