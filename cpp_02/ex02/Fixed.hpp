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

		//Operators
		Fixed &operator=(const Fixed &fixed);
		
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		
		bool operator>(const Fixed &fixed) const;
    	bool operator<(const Fixed &fixed) const;
    	bool operator>=(const Fixed &fixed) const;
    	bool operator<=(const Fixed &fixed) const;
    	bool operator==(const Fixed &fixed) const;
    	bool operator!=(const Fixed &fixed) const;
		
		//Destructor
		~Fixed();

		//Getter and setter
		int getRawBits() const;
		void setRawBits(int const raw);
		
		//Conversions
		float toFloat() const;
		int toInt() const;

		//Min and max
		static Fixed &min(Fixed &param1, Fixed &param2);
		static const Fixed &min(const Fixed &param1, const Fixed &param2);
		static Fixed &max(Fixed &param1, Fixed &param2);
		static const Fixed &max(const Fixed &param1, const Fixed &param2);

};

//Overload of the insertion << operator
std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

# endif
