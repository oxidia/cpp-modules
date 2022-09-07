#pragma once

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *inventory[4];

public:
    Character(void);
    Character(const std::string &name);
    Character(const Character &other);
    ~Character();
    Character &operator=(const Character &other);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};
