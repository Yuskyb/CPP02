#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private: 
		int					_value;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(const Fixed& copy);
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& value);

#endif
