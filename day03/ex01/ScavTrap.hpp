#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

# include <string>

class ScavTrap
{
    private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_max_health_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor;

		static std::string _vaulthunterQuotes[5];

	public:
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap(void);

		ScavTrap &	operator=(const ScavTrap &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
};

#endif