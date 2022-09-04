#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

// Cat::Cat(const Cat &other)
// {
//     std::cout << "Cat Copy constructor called" << std::endl;
//     *this = other;
// }

// Cat &Cat::operator=(const Cat &other)
// {
//     this->type = other.type;
//     return *this;
// }

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "meow" << std::endl;
}
