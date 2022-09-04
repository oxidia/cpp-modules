#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("H010-TP");
    ScavTrap b("CU5TM-TP");
    ScavTrap c = a;

    a.takeDamage(10);
    a.attack(b.getName());
    b.beRepaired(10);
    a.guardGate();
    return (0);
}
