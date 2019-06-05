#include "Human.hpp"
#include <iostream>

int main()
{
	Human drake;

	std::cout << drake.identify() << std::endl;
	std::cout << drake.getBrain().identify() << std::endl;
}