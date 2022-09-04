#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;

public:
    Animal(void);
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();
    virtual std::string getType(void) const;
    virtual void makeSound(void) const;
};
