#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    (void)other;
    this->_type = "cure";
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
