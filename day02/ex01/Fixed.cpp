#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(i << this->fracBits);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(f * (1 << this->fracBits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)(this->value / (float)(1 << this->fracBits));
}

int Fixed::toInt(void) const
{
	return (int)(this->value >> this->fracBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

const int Fixed::fracBits = 8;