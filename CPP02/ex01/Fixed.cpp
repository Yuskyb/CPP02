#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int value)
{
	_value = (value << _bits);
	std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float value)
{
	_value = static_cast <int>(roundf(value * (1 << _bits)));
	std::cout<<"Float constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->_value = copy._value;
}

Fixed&	Fixed::operator=(const Fixed& copy)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &copy)
		this->_value = copy._value;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& value)
{
	os << value.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	_value = raw;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
}

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