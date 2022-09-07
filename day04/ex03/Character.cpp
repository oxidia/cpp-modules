#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const std::string &name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

Character::Character(const Character &other)
{
    *this = other;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
}

Character &Character::operator=(const Character &other)
{
    this->_name = other.getName();
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = NULL;

        if (other.inventory[i] != NULL)
            this->inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

const std::string &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3)
    {
        if (this->inventory[idx] != NULL)
            this->inventory[idx]->use(target);
    }
}
