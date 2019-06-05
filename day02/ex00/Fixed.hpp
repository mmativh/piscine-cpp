#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int value;
	static const int fracBits;
public:
	Fixed();
	Fixed(Fixed const &f);
	~Fixed();
	Fixed & operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif