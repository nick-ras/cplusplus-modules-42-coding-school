#include "Fixed.hpp"

int main() {

	// cout << a = cout is alterede and uses toFloat() function 
	//that print fixed_NB (private var) dividied 
	//with 256 (2^8 or 8 bitshifts to left)
	Fixed a;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
