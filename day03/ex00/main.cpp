#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("H010-TP");
    ClapTrap b("CU5TM-TP");
    std::string name = b.getName();

    a.takeDamage(10);
    a.attack(name);
    b.beRepaired(10);
    return (0);
}
