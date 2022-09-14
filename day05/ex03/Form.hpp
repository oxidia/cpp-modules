#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int signingGrade;
    const int executionGrade;
    bool isSigned;

protected:
    virtual void action(void) const = 0;

public:
    Form(void);
    Form(const std::string &name, int signingGrade, int executionGrade);
    Form(const Form &other);
    Form &operator=(const Form &other);
    virtual ~Form();
    int getSigningGrade(void) const;
    int getExecutionGrade(void) const;
    std::string getName(void) const;
    bool getIsSigned(void) const;
    void beSigned(const Bureaucrat &br);
    void execute(Bureaucrat const &executor) const;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &o, const Form &form);
