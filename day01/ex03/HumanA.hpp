#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
};

#endif
