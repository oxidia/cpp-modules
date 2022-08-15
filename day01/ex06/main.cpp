#include <iostream>
#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl harl;

    if (ac != 2)
    {
        std::cerr << "usage: ./main level" << std::endl;
        return (1);
    }
    harl.complain(std::string(av[1]));
    return (0);
}
