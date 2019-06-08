#include <string>
#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) :
	_name(name), _health(100), _max_health_points(100), _energy_points(100), _max_energy_points(100),
	_level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor(5)
{
	std::cout << "<FR4G-TP> Intiated" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) :
	_name(rhs._name), _health(rhs._health), _max_health_points(rhs._max_health_points),
	_energy_points(rhs._energy_points), _max_energy_points(rhs._max_energy_points), _level(rhs._level),
	_melee_attack_damage(rhs._melee_attack_damage), _ranged_attack_damage(rhs._ranged_attack_damage), _armor(rhs._armor)
{
	std::cout << "<FR4G-TP> Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> I just died" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "<FR4G-TP> Take this rage attack." << std::endl;
	std::cout << " * " << this->_name << " damaged " << this->_ranged_attack_damage << " ranged damage to " << target << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "<FR4G-TP> Take this attack" << std::endl;
	std::cout << " * " << this->_name << " damaged " << this->_melee_attack_damage
		<< " melee damage to " << target << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "<FR4G-TP> I took Damage!" << std::endl;

	if (amount >= this->_armor)
		amount -= this->_armor;
	else
		amount = 0;

	amount = std::min(amount, this->_health);

	std::cout << " * " << this->_name << " took " << amount << " damage" << std::endl;

	if (this->_health >= amount)
		this->_health -= amount;
	else
		this->_health = 0;
}

void FragTrap::beRepaired(unsigned int amount)
{
	amount = std::min(amount, this->_max_health_points - this->_health);

	std::cout << "<FR4G-TP> Healing!" << std::endl;
	std::cout << " * " << this->_name << " healed " << amount << " health" << std::endl;

	this->_health += amount;
}

std::string FragTrap::_vaulthunterQuotes[5] = {
	"This time it'll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
    "Defragmenting!"
};

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy_points < 25)
	{
		std::cout << "<FR4G-TP> This is not looking  good." << std::endl;
		std::cout << " * Out of energy" << std::endl;
		return;
	}
	this->_energy_points -= 25;
	std::cout << "<FR4G-TP> " << FragTrap::_vaulthunterQuotes[std::rand() % 5] << std::endl;
	std::cout << " * Used vaulthunter.exe on " << target << std::endl;
}