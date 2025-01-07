
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <string>
#include <iostream>
typedef std::string str;

class Fixed {

private:
    int fixed_nb;
	static const int nbFractionalBits = 8;

public:

    Fixed();

	~Fixed( void );
	
	Fixed(const int n);
	
	Fixed(const float float_nb);

	Fixed(const Fixed &other); //copy constructor

	float toFloat( void ) const;

	int toInt( void ) const;

	int getRawBits( void ) const;

	void setRawBits( int const raw );

	 //operators---------------------
	Fixed& operator=(const Fixed &other); //assignment operator

	Fixed& operator++();

	Fixed operator++(int);
};
std::ostream& operator<<(std::ostream& os, Fixed const &other); // HUSK det bruges ved a << b
#endif