#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int value;
	static const int fracBits;
public:
	Fixed();
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const &f);
	~Fixed();
	Fixed & operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif // FIXED_H