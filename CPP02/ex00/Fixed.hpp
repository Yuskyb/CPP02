#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private: 
		int					_value;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed(void);
		Fixed(const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(const Fixed& copy);
		~Fixed(void);
};

#endif