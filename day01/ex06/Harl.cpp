#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::printTitle(std::string title)
{
    std::cout << "[ " << title << " ]" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    const int count = 4;
    int i;

    for (i = 0; i < count; i++)
    {
        if (levels[i] == level)
            break;
    }

    switch (i)
    {
    case 0:
        this->printTitle("DEBUG");
        this->debug();
        std::cout << std::endl;

    case 1:
        this->printTitle("INFO");
        this->info();
        std::cout << std::endl;

    case 2:
        this->printTitle("WARNING");
        this->warning();
        std::cout << std::endl;

    case 3:
        this->printTitle("ERROR");
        this->error();
        std::cout << std::endl;
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
