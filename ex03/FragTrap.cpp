#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    name_ = name;
    hitPoints_ = 100;
    energyPoints_ = 100;
    attackDamage_ = 30;
    std::cout << "FragTrap " << name_ << " has been initialized" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name_ << " wants to high five!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name_ << " has been deinitialized" << std::endl;
}