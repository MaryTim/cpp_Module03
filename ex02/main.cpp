#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap andrzej("Andrzej");
    andrzej.attack("someone");
    andrzej.takeDamage(5);
    andrzej.beRepaired(2);
    andrzej.attack("Krzysztof");
    andrzej.attack("Franek");

    std::cout << "\nTime to create scavTrap\n";
    ScavTrap st("Incognito");
    st.attack("Andrzej");
    st.takeDamage(3);
    st.beRepaired(3);
    st.attack("someone");
    st.guardGate();

    std::cout << "\nTime to create fragTrap\n";
    FragTrap ft("Baby");
    ft.attack("Andrzej");
    ft.takeDamage(3);
    ft.beRepaired(3);
    ft.attack("someone");
    ft.highFivesGuys();
}