#include <string>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zEvent;

	zEvent.setZombieType("slow");
	Zombie *zombie = zEvent.newZombie("nicky");
	Zombie *zombie2 = zEvent.newZombie("wayne");

	zEvent.setZombieType("speedies");
	for (int i = 0; i < 5; i++)
		zEvent.randomChump();

	delete zombie;
	delete zombie2;
}