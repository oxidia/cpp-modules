#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(const Cure &other);
    Cure &operator=(const Cure &other);
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};
