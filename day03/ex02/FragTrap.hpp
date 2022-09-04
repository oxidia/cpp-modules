#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);
    ~FragTrap();
    void highFivesGuys(void);
};
