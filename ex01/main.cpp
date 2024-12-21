#include "ClapTrap.hpp"

int main() {
    ClapTrap andrzej("Andrzej");
    andrzej.attack("someone");
    andrzej.takeDamage(5);
    andrzej.beRepaired(2);
    andrzej.attack("Krzysztof");
    andrzej.attack("Krzysztof");
    andrzej.attack("Krzysztof");
    andrzej.attack("Krzysztof");
    andrzej.takeDamage(2);
    andrzej.beRepaired(1);
    andrzej.beRepaired(1);
    andrzej.beRepaired(1);
    andrzej.beRepaired(1);
    andrzej.beRepaired(1); //cant
    andrzej.attack("Krzysztof"); //cant

    ClapTrap krzysztof("Krzysztof");
    krzysztof.attack("Wojtek");
    krzysztof.takeDamage(8);
    krzysztof.beRepaired(3);
    krzysztof.attack("Michal");
    krzysztof.takeDamage(12);
    krzysztof.attack("a girl");
}