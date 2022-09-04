#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("H010-TP");
    FragTrap b("CU5TM-TP");
    FragTrap c = a;

    a.takeDamage(10);
    a.attack(b.getName());
    b.beRepaired(10);
    a.highFivesGuys();
    return (0);
}
