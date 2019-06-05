#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"
#include <string>

class Human {
private:
	const Brain brain;
public:
	Human();
	~Human();
	std::string identify(void) const;
	const Brain &getBrain(void) const;
};

#endif // HUMAN_H