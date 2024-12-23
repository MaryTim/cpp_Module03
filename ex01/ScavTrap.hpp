#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
private:
    std::string name_;
    unsigned int hitPoints_;
    unsigned int energyPoints_;
    unsigned int attackDamage_;
};

#endif