#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "animal";
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal: " << this->getType() << " copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
