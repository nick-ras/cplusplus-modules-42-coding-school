
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
	
	Fixed(const int n);
	
	Fixed(const float float_nb);


	Fixed(const Fixed &other); //copy constructor

	Fixed& operator=(const Fixed &other); //operator


	~Fixed( void );

	float toFloat( void ) const;

	int toInt( void ) const;

	int getRawBits( void ) const;

	void setRawBits( int const raw );
};
std::ostream& operator<<(std::ostream& os, Fixed const &other); // HUSK det bruges ved a << b
#endif