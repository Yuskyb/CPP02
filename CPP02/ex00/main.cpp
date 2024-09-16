#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}

// int main(void)
// {
// 	Fixed a;

// 	std::cout << a.getRawBits() << std::endl;
// 	a.setRawBits(50);
// 	std::cout << a.getRawBits() << std::endl;

// 	Fixed b(a);

// 	std::cout << b.getRawBits() << std::endl;
// 	b.setRawBits(50);
// 	std::cout << b.getRawBits() << std::endl;

// 	Fixed c;
// 	c = a;
// 	std::cout << c.getRawBits() << std::endl;
// 	c.setRawBits(50);
// 	std::cout << c.getRawBits() << std::endl;
// 	return (0);
// }
