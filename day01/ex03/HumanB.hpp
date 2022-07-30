#ifndef _HUMANB_HPP
#define _HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif
