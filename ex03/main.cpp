#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

    std::cout << "\nTime to create fragTrap\n";
    FragTrap ft("Baby");
    ft.attack("Andrzej");
    ft.takeDamage(3);
    ft.beRepaired(3);
    ft.attack("someone");
    ft.highFivesGuys();

    std::cout << "\nTime to create diamondTrap\n";
    DiamondTrap dt("Amazing");
    dt.attack("Andrzej");
    dt.takeDamage(3);
    dt.beRepaired(3);
    dt.attack("someone");
    dt.highFivesGuys();
    dt.whoAmI();
}