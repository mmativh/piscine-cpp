#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
	this->zombies = new Zombie[n];
	this->numOfZombies = n;

	std::cout << "\nThe Zombie Horde has been created\n" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombies;
	std::cout << "\nThe Zombie Horde has been eliminated" << std::endl;
}

void ZombieHorde::announce(void)
{
	int x = 0;

	while(x < this->numOfZombies){
		this->zombies[x].announce();
		x++;
	}
}