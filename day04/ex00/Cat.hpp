#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    // Cat(const Cat &other);
    // Cat &operator=(const Cat &other);
    ~Cat();
    void makeSound(void) const;
};
