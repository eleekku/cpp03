#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Claptrap");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3 = claptrap;

    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    claptrap2.attack("enemy");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);

    claptrap3.attack("enemy");
    claptrap3.takeDamage(5);
    claptrap3.beRepaired(3);

    return (0);
}