#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    (void)other;
    this->_type = "ice";
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
