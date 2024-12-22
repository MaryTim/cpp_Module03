#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"),
    ScavTrap(name), FragTrap(name), name_(name) {
        hitPoints_ = ::FragTrap::hitPoints_;
        energyPoints_ = ::ScavTrap::energyPoints_;
        attackDamage_ = ::FragTrap::attackDamage_;
    std::cout << "DiamondTrap constructor called for " << name_ << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name_), ScavTrap(other.name_), FragTrap(other.name_) {
    std::cout << "DiamondTrap " << name_ << " copy constructor has been called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap " << name_ << " assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->name_ = other.name_;
		this->attackDamage_ = other.attackDamage_;
		this->energyPoints_ = other.energyPoints_;
		this->hitPoints_ = other.hitPoints_;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
    std::cout << "DiamondTrap " << name_ << " attacks using ScavTrap's attack method." << std::endl;
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap's name is" << name_ << std::endl;
    std::cout << "ClapTrap's name is" << ClapTrap::name_ << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name_ << " has been deinitialized" << std::endl;
}