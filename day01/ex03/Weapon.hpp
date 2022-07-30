#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon();
    Weapon(std::string type);
    std::string const &getType(void);
    void setType(std::string type);
};

#endif
