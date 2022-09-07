#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class Character;

class AMateria
{
protected:
    std::string _type;

public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &other);
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};
