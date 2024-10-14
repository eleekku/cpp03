#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->_name = "No name";
    this->_hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitpoints = copy._hitpoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if (target.empty()) {
        std::cout << "ClapTrap " << this->_name << " cannot attack an empty target!" << std::endl;
    }
    if (this->_energyPoints > 0 && this->_hitpoints > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is out of energy or hitpoints!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitpoints -= amount;
    if (this->_hitpoints < 0)
		this->_hitpoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitpoints -= amount;
    if (this->_energyPoints > 0 && this->_hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
        this->_energyPoints -= 1;
        if (this->_hitpoints + amount > 10)
            this->_hitpoints = 10;
        else
            this->_hitpoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is out of energy or hitpoints!" << std::endl;
    
}


