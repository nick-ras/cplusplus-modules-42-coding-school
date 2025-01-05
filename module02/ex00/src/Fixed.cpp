    #include "Fixed.hpp"
    

    Fixed::Fixed(int const value){
        fixed_nb = value;
    };

	Fixed::Fixed(const Fixed &other){
        //do smth here in cp constru?
    } //copy constructor - create new instance from scratch


	Fixed& Fixed::operator=(const Fixed &other){
        if (this == &other) {
            return *this;
        } //so it doesnt overwrite itself
        this->fixed_nb = other.fixed_nb;
        return *this;
    } // copy assignment operator - copy from one object to another

    Fixed::~Fixed( void ){
        //free allocated memory
    }

	int  Fixed::getRawBits( void ) const{
        return fixed_nb;
    };
	void  Fixed::setRawBits( int const raw ){
        fixed_nb = raw;
    };
