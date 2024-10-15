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
    this->_hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called with name " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitpoints = copy._hitpoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    if (target.empty()) {
        std::cout << "ScavTrap " << this->_name << " cannot attack an empty target!" << std::endl;
    }
    if (this->_energyPoints > 0 && this->_hitpoints > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is out of energy or hitpoints!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}