#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		FragTrap	robot("Elliot");
		FragTrap	clone = robot;

		robot.rangedAttack("Nabile");
		robot.vaulthunter_dot_exe("Nabile");
		robot.vaulthunter_dot_exe("zine");
		robot.vaulthunter_dot_exe("zine");
		robot.vaulthunter_dot_exe("zine");
		robot.vaulthunter_dot_exe("zine");

		robot.takeDamage(101);
		robot.takeDamage(4);
		robot.takeDamage(101);
	}
	{
		ScavTrap	robot("Elliot");
		ScavTrap	clone = robot;

		clone.set_name(std::string("mrRobot"));

		robot.meleeAttack("Naab");
		robot.meleeAttack("Naab");
		clone.challengeNewcomer("zine");
		clone.challengeNewcomer("guillaume");
		clone.challengeNewcomer("guigui");
		clone.challengeNewcomer("guigui");

		clone.takeDamage(1001);
		clone.takeDamage(1001);
	}
	return 0;
}