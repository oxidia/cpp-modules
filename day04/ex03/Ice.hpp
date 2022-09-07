#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice(void);
    Ice(const Ice &other);
    Ice &operator=(const Ice &other);
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};
