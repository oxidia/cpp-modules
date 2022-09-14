#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 145, 137)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 145, 137)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    this->_target = other.getTarget();
    return (*this);
}

const std::string &PresidentialPardonForm::getTarget(void) const
{
    return this->_target;
}

void PresidentialPardonForm::action(void) const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
