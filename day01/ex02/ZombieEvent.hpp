#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void setZombieType(string type);
		Zombie* newZombie(string name) const;

		void randomChump(void) const;

	private:
		string _type;
		static string _names[5];
};

#endif