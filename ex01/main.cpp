#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // Create ClapTrap object
    ClapTrap claptrap("Claptrap");
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    // Create ScavTrap object
    ScavTrap scavtrap("Scavvy");
    scavtrap.attack("enemy");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    // Copy constructor and assignment operator
    ScavTrap scavtrapCopy(scavtrap);
    ScavTrap scavtrapAssigned = scavtrap;

    scavtrapCopy.attack("another enemy");
    scavtrapAssigned.attack("yet another enemy");

    return 0;
}