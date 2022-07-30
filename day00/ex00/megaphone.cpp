#include <iostream>
#include <cctype>

static void printStrToUpper(const char *str)
{
    size_t  i;

    for (i = 0; str[i] != '\0'; i++)
    {
        std::cout << (char)toupper(str[i]);
    }
}

int main(int ac, char *av[])
{
    int i;

    if (ac >= 2)
    {
        for (i = 1; i < ac; i++)
            printStrToUpper(av[i]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
