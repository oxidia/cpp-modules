#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    static Zombie *newZombie(std::string name);
    static void randomChump(std::string name);
    static Zombie *zombieHorde(int N, std::string name);

    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};

#endif
