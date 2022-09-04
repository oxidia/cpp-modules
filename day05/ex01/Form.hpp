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

public:
    Form(void);
    Form(const std::string &name, int signingGrade, int executionGrade);
    ~Form();
    int getSigningGrade(void) const;
    int getExecutionGrade(void) const;
    std::string getName(void) const;
    bool getIsSigned(void) const;
    void beSigned(const Bureaucrat &br);

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
};

std::ostream &operator<<(std::ostream &o, const Form &form);
