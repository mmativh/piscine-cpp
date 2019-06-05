#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
private:
	std::string name;
	int iq;
public:
	Brain(std::string name, int iq);
	~Brain();
	std::string identify(void) const;
};

#endif