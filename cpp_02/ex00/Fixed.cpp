#include "Fixed.hpp"


Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->fixed_point_value = fixed.getRawBits;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

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
		
