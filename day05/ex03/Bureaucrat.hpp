#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;

    void setGrade(int grade);

public:
    Bureaucrat(void);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat(const std::string &name, int grade);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &other);

    int getGrade(void) const;
    std::string getName(void) const;
    void signForm(Form &form);
    void executeForm(Form const &form);

    void incrementGrade();
    void decrementGrade();

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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);
