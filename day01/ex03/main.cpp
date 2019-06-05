#include "ZombieHorde.hpp"
#include <iostream>

int main()
{
	ZombieHorde zombieHorde = ZombieHorde(10);
	zombieHorde.announce();

	std::cout << "\nLeaving main\n" << std::endl;
	return 0;
}