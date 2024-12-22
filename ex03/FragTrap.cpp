#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    name_ = name;
    hitPoints_ = 100;
    energyPoints_ = 100;
    attackDamage_ = 30;
    std::cout << "FragTrap " << name_ << " has been initialized" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name_) {
    std::cout << "FragTrap " << name_ << " copy constructor has been called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap " << name_ << " assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->name_ = other.name_;
		this->attackDamage_ = other.attackDamage_;
		this->energyPoints_ = other.energyPoints_;
		this->hitPoints_ = other.hitPoints_;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name_ << " wants to high five!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name_ << " has been deinitialized" << std::endl;
}