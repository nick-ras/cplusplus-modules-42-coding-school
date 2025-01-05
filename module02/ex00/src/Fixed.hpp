
#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <string>
#include <iostream>

class Fixed {

private:
    int fixed_nb;
	static const int nbFractionalBits = 8;

public:

    Fixed(int const value);

	Fixed(const Fixed &other); //copy constructor

	Fixed& operator=(const Fixed &other); //operator

	~Fixed( void );

	int getRawBits( void ) const;

	void setRawBits( int const raw );
};
#endif