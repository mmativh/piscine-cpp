#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include "Zombie.hpp"
#include <string>

class ZombieHorde
{
private:
	Zombie* zombies;
	int numOfZombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce(void);
};


#endif // ZOMBIE_HORDE_H