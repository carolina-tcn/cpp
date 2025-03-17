#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed
{
	private:
		int fixed_point_value;
		static const int fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixed); //copy constructor

		Fixed(const int value);
		Fixed(const float value);

		Fixed &operator = (const Fixed &fixed);//copy assignment operator overload
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);

		float toFloat() const;
		int toInt() const;
};



# endif
