#include "Zombie.hpp"

Zombie::Zombie(string name, string type) : _name(name), _type(type) {
	this->announce();
}

Zombie::~Zombie(void) {
	cout << "<" << this->_name << " (" << this->_type<< ")> zombie dies" << endl;
}

void Zombie::announce(void) const {
	cout << "<" << this->_name << " (" << this->_type<< ")> Braiiiiiiinssss..." << endl;
}