#include "Converter.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "usage: ./convert value" << std::endl;
        return (1);
    }
    else
    {
        Converter converter(av[1]);

        converter.tryChar();
        converter.tryInt();
        converter.tryFloat();
        converter.tryDouble();
    }
    return (0);
}
