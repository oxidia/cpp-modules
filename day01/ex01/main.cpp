#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    int i;
    int N;

    N = 10;
    zombies = Zombie::zombieHorde(N, "small one");
    for (i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}
