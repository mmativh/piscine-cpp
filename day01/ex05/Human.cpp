#include "Human.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

Human::Human() : brain("drake", 200)
{
}

Human::~Human()
{
}

std::string Human::identify(void) const
{
	return this->brain.identify();
}

const Brain& Human::getBrain(void) const
{
	return brain;
}