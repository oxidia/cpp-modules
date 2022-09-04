#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const int size = 10;
    Animal *animals = new Animal[size];

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            animals[i] = Dog();
        else
            animals[i] = Cat();
    }
    delete[] animals;
    return (0);
}
