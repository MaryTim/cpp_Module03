#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap andrzej("Andrzej");
    andrzej.attack("someone");
    andrzej.takeDamage(5);
    andrzej.beRepaired(2);
    andrzej.attack("Krzysztof");
    andrzej.attack("Krzysztof");

    std::cout << "\nTime to create scavTrap\n";
    ScavTrap st("Incognito");
    st.attack("Andrzej");
    st.takeDamage(3);
    st.beRepaired(3);
    st.attack("someone");
    st.guardGate();
}