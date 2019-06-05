#include "Brain.hpp"
#include <string>
#include <iostream>
#include <sstream>

Brain::Brain(std::string name, int iq)
{
	this->name = name;
	this->iq = iq;
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return buffer.str();
}