#include "Fixed.hpp"

void	Fixed::Fixed()
{
	_value = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

void	Fixed::Fixed(const Fixed& copy)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	*this = copy;
}

Fixed&	operator=(const Fixed& copy)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &copy)
		this->_value = copy._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->_value = raw;
}

void	Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
}