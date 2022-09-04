#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = NULL;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "ass" << std::endl;
    this->type = other.type;
    if (this->brain == NULL)
        this->brain = new Brain(*other.brain);
    else
        *this->brain = *other.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << "woof" << std::endl;
}
