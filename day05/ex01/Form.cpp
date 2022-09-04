#include "Form.hpp"

Form::Form(void)
    : name(""), signingGrade(0), executionGrade(0), isSigned(false)
{
}

Form::Form(const std::string &name, int signingGrade, int executionGrade)
    : name(name), signingGrade(signingGrade), executionGrade(executionGrade), isSigned(false)
{
    if (signingGrade < 1 || executionGrade < 1)
        throw GradeTooHighException();
    if (signingGrade > 150 || executionGrade > 150)
        throw GradeTooLowException();
}

int Form::getSigningGrade(void) const
{
    return this->signingGrade;
}

int Form::getExecutionGrade(void) const
{
    return this->executionGrade;
}

std::string Form::getName(void) const
{
    return this->name;
}

bool Form::getIsSigned(void) const
{
    return this->isSigned;
}

void Form::beSigned(const Bureaucrat &br)
{
    if (br.getGrade() > this->getSigningGrade())
        throw GradeTooLowException();
    this->isSigned = true;
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
    o << form.getName()
      << ", signing grade " << form.getSigningGrade() << ", execution grade " << form.getExecutionGrade()
      << ", "
      << (form.getIsSigned() ? "signed" : "not signed");
    return o;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}
