#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0) {
    std::cout << "Claptrap " << name_ << " has been initialized" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Claptrap " << name_ << " copy constructor has been called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Claptrap " << name_ << " assignment operator constructor has been called!" << std::endl;
	if (this != &other) {
		this->name_ = other.name_;
		this->attackDamage_ = other.attackDamage_;
		this->energyPoints_ = other.energyPoints_;
		this->hitPoints_ = other.hitPoints_;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints_ > 0 && hitPoints_ > 0) {
        std::cout << "Claptrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
        energyPoints_ -= 1;
    } else if (energyPoints_ == 0) {
        std::cout << "ClapTrap " << name_ << " doesn't have enough energy points for attack!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name_ << " is dead!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints_ > amount) {
		hitPoints_ -= amount;
		std::cout << "ClapTrap " << this->name_ << " was attacked and got " << amount << " points of damage" << std::endl;
		std::cout << "Now he has " << this->hitPoints_ << " hit points" << std::endl;
	} else if (hitPoints_ > 0) {
		hitPoints_ = 0;
		std::cout << "ClapTrap " << name_ << " got attacked and took " << amount << " points of damage" << std::endl;
		std::cout << "Now he's dead!" << std::endl;
	} else {
		std::cout << "ClapTrap " << name_ << " is very dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints_ > 0) {
        hitPoints_ += amount;
        energyPoints_ -=1;
        std::cout << "ClapTrap " << name_ << " has been repaired and now has " << hitPoints_ << " hit points" << std::endl;
    } else {
        std::cout << "Not enough energy points to repair ClapTrap " << name_ << std::endl;
    }
    
}

ClapTrap::~ClapTrap() {
    std::cout << "Claptrap " << name_ << " has been deinitialized" << std::endl;
}