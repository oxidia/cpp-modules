#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    this->_target = other.getTarget();
    return (*this);
}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
    return this->_target;
}

void ShrubberyCreationForm::action(void) const
{
    std::string filename = this->getTarget() + "_shrubbery";
    std::ofstream out(filename.c_str());

    out << "        _-_" << std::endl;
    out << "     /~~   ~~\\" << std::endl;
    out << "  /~~         ~~\\" << std::endl;
    out << " {               }" << std::endl;
    out << "  \\  _-     -_  /" << std::endl;
    out << "    ~  \\ //  ~" << std::endl;
    out << " _- -   | | _- _" << std::endl;
    out << "   _ -  | |   -_" << std::endl;
    out << "       // \\" << std::endl;

    out.close();
}
