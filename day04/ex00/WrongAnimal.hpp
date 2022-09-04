#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal(void);
    virtual ~WrongAnimal();
    void makeSound(void) const;
    std::string getType(void) const;
};
