#include "Fixed.hpp"
#include <cmath>


//Constructors
Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value = roundf(value * (1 << fractional_bits));
}


//Operators
Fixed& Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->fixed_point_value = fixed.getRawBits();
	return (*this);
}
Fixed Fixed::operator+(const Fixed &fixed) const;
Fixed Fixed::operator-(const Fixed &fixed) const;
Fixed Fixed::operator*(const Fixed &fixed) const;
Fixed Fixed::operator/(const Fixed &fixed) const;

Fixed &Fixed::operator++();
Fixed Fixed::operator++(int);
Fixed &Fixed::operator--();
Fixed Fixed::operator--(int);
		
bool Fixed::operator>(const Fixed &fixed) const;
bool Fixed::operator<(const Fixed &fixed) const;
bool Fixed::operator>=(const Fixed &fixed) const;
bool Fixed::operator<=(const Fixed &fixed) const;
bool Fixed::operator==(const Fixed &fixed) const;
bool Fixed::operator!=(const Fixed &fixed) const;


//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


//Getter and setter
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
static Fixed &Fixed::min(Fixed &param1, Fixed &param2);
static const Fixed &Fixed::min(const Fixed &param1, const Fixed &param2);
static Fixed &Fixed::max(Fixed &param1, Fixed &param2);
static const Fixed &Fixed::max(const Fixed &param1, const Fixed &param2);


//Overload of the insertion << operator
std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

