#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap() : ClapTrap() {
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap parameterized constructor called with name " << this->_name << std::endl;
    this->_hitpoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap " << other._name << " copied." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitpoints = copy._hitpoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}