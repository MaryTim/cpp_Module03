#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    name_ = name;
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
    std::cout << "ScavTrap " << name_ << " has been initialized" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name_) {
    std::cout << "ScavTrap " << name_ << " copy constructor has been called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap " << name_ << " assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->name_ = other.name_;
		this->attackDamage_ = other.attackDamage_;
		this->energyPoints_ = other.energyPoints_;
		this->hitPoints_ = other.hitPoints_;
	}
	return *this;
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