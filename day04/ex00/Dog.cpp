#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

// Dog::Dog(const Dog &other)
// {
//     std::cout << "Dog copy constructor called" << std::endl;
//     *this = other;
// }

// Dog &Dog::operator=(const Dog &other)
// {
//     this->type = other.type;
//     return *this;
// }

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "woof" << std::endl;
}
