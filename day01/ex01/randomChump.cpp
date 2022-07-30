#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie *zombie;

    zombie = Zombie::newZombie(name);
    zombie->announce();
    delete zombie;
}
