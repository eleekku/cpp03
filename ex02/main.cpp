#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap");
    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    FragTrap fragtrap("Fraggy");
    fragtrap.attack("enemy");
    fragtrap.takeDamage(30);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();

    // Copy constructor and assignment operator for FragTrap
    FragTrap fragtrapCopy(fragtrap);
    FragTrap fragtrapAssigned = fragtrap;

    fragtrapCopy.attack("another enemy");
    fragtrapAssigned.attack("yet another enemy");

    return 0;
}