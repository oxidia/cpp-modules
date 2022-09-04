#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

// Cat::Cat(const Cat &other)
// {
//     std::cout << "Cat Copy constructor called" << std::endl;
//     *this = other;
// }

Cat &Cat::operator=(const Cat &other)
{
    this->type = other.type;
    this->brain = other.brain;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
    std::cout << "meow" << std::endl;
}
