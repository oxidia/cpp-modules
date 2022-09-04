#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : ClapTrap()
{
    std::cout << "Name constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    this->_name = other._name;

    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_canDoAction())
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is out of resources!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_canDoAction())
    {
        std::cout << "ClapTrap " << this->_name << " took " << amount << " damage points!" << std::endl;
        this->_hitPoints -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is out of resources!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_canDoAction())
    {
        std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is out of resources!" << std::endl;
    }
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

bool ClapTrap::_canDoAction(void) const
{
    return this->_hitPoints > 0 && this->_energyPoints > 0;
}
