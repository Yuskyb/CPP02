#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(int value)
{
	_value = (value << _bits);
}

Fixed::Fixed(float value)
{
	_value = static_cast <int>(roundf(value * (1 << _bits)));
}

Fixed::Fixed(const Fixed& copy)
{
	this->_value = copy._value;
}

Fixed&	Fixed::operator=(const Fixed& copy)
{
	if (this != &copy)
		this->_value = copy._value;
	return (*this);
}

bool	operator>(const	Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value > obj2._value)
		return (true);
	return (false);
}

bool	operator<(const	Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value < obj2._value)
		return (true);
	return (false);
}

bool	operator>=(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value >= obj2._value)
		return (true);
	return (false);
}

bool	operator<=(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value <= obj2._value)
		return (true);
	return (false);
}

bool	operator==(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value == obj2._value)
		return (true);
	return (false);
}

bool	operator!=(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value != obj2._value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& obj)
{
	Fixed	result;
	result._value = 0;
	result._value = this->_value + obj._value;
	return (result);
}

Fixed Fixed::operator-(const Fixed& obj)
{
	Fixed	result;
	result._value = 0;
	result._value = this->_value - obj._value;
	return (result);
}

Fixed Fixed::operator*(const Fixed& obj)
{
	Fixed	result;
	result._value = 0;
	result._value = (this->_value * obj._value) >> _bits;
	return (result);
}

Fixed Fixed::operator/(const Fixed& obj)
{
	Fixed	result;
	result._value = 0;
	result._value = (this->_value << _bits) / obj._value;
	return (result);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed&	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_value++;
	return (temp);
}


Fixed&	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_value--;
	return (temp);
}

int	Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::~Fixed(void) {}

float	Fixed::toFloat(void) const
{
	float	result;
	float	value;

	value = static_cast <float>(_value);
	result = value / (1 << _bits);
	return (result);
}

int	Fixed::toInt(void) const
{
	return (_value / (1 << _bits));
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1._value > obj2._value)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value > obj2._value)
		return (obj1);
	return (obj2);
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1._value < obj2._value)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1._value < obj2._value)
		return (obj1);
	return (obj2);
}