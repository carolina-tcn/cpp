#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int fixed_point_num;
		static const int fractional_bits = 8;

	public:
		Fixed();
		Fixed(Fixed &fixed); //copy constructor
		//copy assignment operator overload

		int getRawBits() const;
		void setRawBits(int const raw);
		
		~Fixed();
};

# endif
