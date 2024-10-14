#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
    }
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}