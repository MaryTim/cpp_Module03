#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    name_ = name;
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
    std::cout << "ScavTrap " << name_ << " has been initialized" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints_ > 0 && hitPoints_ > 0) {
        std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
        energyPoints_ -= 1;
    } else if (energyPoints_ == 0) {
        std::cout << "ScavTrap " << name_ << " doesn't have enough energy points for attack!" << std::endl;
    } else {
        std::cout << "ScavTrap " << name_ << " is dead!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name_ << " has been deinitialized" << std::endl;
}