#include "Fixed.hpp"
#include <cmath>


//Constructors
Fixed::Fixed() : fixed_point_value(0) {}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	fixed_point_value = roundf(value * (1 << fractional_bits));
}


//Operators
Fixed& Fixed::operator = (const Fixed &fixed)
{
	if (this != &fixed)
		this->fixed_point_value = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}
Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

//Pre
Fixed &Fixed::operator++()
{
	this->fixed_point_value++;
	return (*this);
}


Fixed &Fixed::operator--()
{
	this->fixed_point_value--;
	return (*this);
}

//Post
Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fixed_point_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->fixed_point_value--;
	return (tmp);
}


//Boolean operators
bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->fixed_point_value > fixed.fixed_point_value);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->fixed_point_value < fixed.fixed_point_value);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->fixed_point_value >= fixed.fixed_point_value);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->fixed_point_value <= fixed.fixed_point_value);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->fixed_point_value == fixed.fixed_point_value);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->fixed_point_value != fixed.fixed_point_value);
}


//Destructor
Fixed::~Fixed() {}



//Getter and setter
int Fixed::getRawBits() const
{
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}


//Conversions
float Fixed::toFloat() const
{
	return ((float)fixed_point_value / (1 << fractional_bits));
}

int Fixed::toInt() const
{
	return (fixed_point_value >> fractional_bits);
}


//Min and max
Fixed &Fixed::min(Fixed &param1, Fixed &param2)
{
	if (param1 < param2)
		return (param1);
	return (param2);
}

const Fixed &Fixed::min(const Fixed &param1, const Fixed &param2)
{
	if (param1 < param2)
		return (param1);
	return (param2);
}

Fixed &Fixed::max(Fixed &param1, Fixed &param2)
{
	if (param1 > param2)
		return (param1);
	return (param2);
}

const Fixed &Fixed::max(const Fixed &param1, const Fixed &param2)
{
	if (param1 > param2)
		return (param1);
	return (param2);
}


//Overload of the insertion << operator
std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

