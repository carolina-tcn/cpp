#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
#include <iostream>

class Fixed
{
	private:
		//Members
		int fixed_point_value;
		static const int fractional_bits = 8;

	public:
		//Constructors
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);

		//Assignment operator
		Fixed &operator = (const Fixed &fixed);//copy assignment operator overload

		//Destructor
		~Fixed();

		//Member functions
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

# endif
