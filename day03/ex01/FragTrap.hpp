#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <string>

class FragTrap
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
		FragTrap(const std::string name);
		FragTrap(const FragTrap &obj);
		~FragTrap(void);

		FragTrap &	operator=(const FragTrap &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif