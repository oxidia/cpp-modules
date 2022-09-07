#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    (void)other;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}

AMateria::~AMateria()
{
}
