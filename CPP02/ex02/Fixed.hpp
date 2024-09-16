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
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed&	operator=(const Fixed& copy);
		Fixed	operator+(const Fixed& obj);
		Fixed	operator-(const Fixed& obj);
		Fixed	operator*(const Fixed& obj);
		Fixed	operator/(const Fixed& obj);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		friend bool	operator>(const	Fixed& obj1, const Fixed& obj2);
		friend bool	operator<(const Fixed& obj1, const Fixed& obj2);
		friend bool	operator>=(const Fixed& obj1, const Fixed& obj2);
		friend bool	operator<=(const Fixed& obj1, const Fixed& obj2);
		friend bool	operator==(const Fixed& obj1, const Fixed& obj2);
		friend bool	operator!=(const Fixed& obj1, const Fixed& obj2);
		static Fixed& max(Fixed& obj1, Fixed& obj2);
		static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
		static Fixed& min(Fixed& obj1, Fixed& obj2);
		static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
		~Fixed();
};

std::ostream&	operator<<(std::ostream& os, const Fixed& value);

#endif
