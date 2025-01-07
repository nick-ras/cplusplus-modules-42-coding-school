    #include "Fixed.hpp"
    

    Fixed::Fixed(){
        fixed_nb = 0 << nbFractionalBits; //not sure im supose to
        // std::cout << "Def constructor called" << std::endl;
    };

    Fixed::~Fixed( void ){
        // std::cout << "Destructor called" << std::endl;
    }

    Fixed::Fixed(const int n){
        fixed_nb = n << nbFractionalBits;
        //  std::cout << "int constructor" << std::endl;
    };

    Fixed::Fixed(const float float_nb){

        fixed_nb = float_nb * (1 << nbFractionalBits);
    
        // std::cout << "float constructor" << std::endl;
    };

	Fixed::Fixed(const Fixed &other){
        std::cout << "Copy constructor called" << std::endl;
        this->fixed_nb = other.fixed_nb;
    } //copy constructor - create new instance from scratch

    // fixed_nb is shifted 8 to right. so nb / 256 is number.
    float Fixed::toFloat( void ) const{
        float temp = fixed_nb / static_cast<float>(1 << nbFractionalBits);
        // std::cout << "tofloat: " << temp << std::endl;
        return temp;
    } 
    // same as above i just shift bits bck to the right
    int Fixed::toInt( void ) const{
        int temp = fixed_nb >> nbFractionalBits;

        std::cout << temp << std::endl;
        return temp;
    }

	int  Fixed::getRawBits( void ) const{
        // std::cout << "getRawBits member function called" << std::endl;  // debug
        return fixed_nb;
    };
	void  Fixed::setRawBits( int const raw ){
        // std::cout << "setRawBits member function called" << std::endl;
        fixed_nb = raw;
    };

	Fixed& Fixed::operator=(const Fixed& other){
        // std::cout << "Assignation operator called" << std::endl;
        if (this != &other) {
            this->fixed_nb = other.fixed_nb;
        } //so it doesnt overwrite itself
       
        return *this;
    } // copy assignment operator - copy from one object to another

    Fixed& Fixed::operator++(){
        std::cout << "operator++ called" << std::endl;
        this->fixed_nb++;
        return *this;
    } // for a++

    Fixed Fixed::operator++(int){
        Fixed temp(*this);
        operator++();
        std::cout << "operator++(int): " << std::endl;
        return temp;
        // should output 0,039 not 0
    }


//outside class----------------------
    std::ostream& operator<<(std::ostream& os, Fixed const &other){
        // std::cout << "OSTREAM<< called: float is" << other.toFloat() << std::endl;  // debug  // when i print it, it calls this function, so i can debug it by printing the output of this function
        os << other.toFloat();
    
        return os;
    }
