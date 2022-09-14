#include "Form.hpp"

Form::Form(void)
    : name(""), signingGrade(150), executionGrade(150), isSigned(false)
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

Form::Form(const Form &other)
    : name(other.name), signingGrade(other.signingGrade), executionGrade(other.executionGrade), isSigned(other.isSigned)

{
}

Form &Form::operator=(const Form &other)
{
    this->isSigned = other.isSigned;
    return (*this);
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

void Form::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->getExecutionGrade())
        throw Form::GradeTooLowException();
    this->action();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("grade too low");
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("form not signed");
}
