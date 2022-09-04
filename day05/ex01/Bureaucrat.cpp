#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    *this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    // this->name = other.getName();
    this->setGrade(other.getGrade());
    return (*this);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
    this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::decrementGrade()
{
    this->setGrade(this->getGrade() + 1);
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}
