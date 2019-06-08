
#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft("FR4GGY");
	FragTrap ft2(ft);

	for (int i = 0; i < 7; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 7; i++)
		ft.beRepaired(20);

	ft.rangedAttack("chip");
	ft.meleeAttack("dip");

	for (int i = 0; i < 10; i++)
		ft.vaulthunter_dot_exe("Attacker");
}