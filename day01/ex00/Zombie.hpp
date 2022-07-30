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

    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

#endif
