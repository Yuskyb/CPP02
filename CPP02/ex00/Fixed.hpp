#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private: 
		int				_value;
		static const	int_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
}

#endif