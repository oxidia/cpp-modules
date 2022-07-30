#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    Zombie *zombies;
    int i;

    zombies = new Zombie[N];
    for (i = 0; i < N; i++)
    {
        zombies[i].setName(name);
    }
    return (zombies);
}
