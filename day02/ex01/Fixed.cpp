#include "Fixed.hpp"

const int Fixed::_numberOfFractionalBits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(value << Fixed::_numberOfFractionalBits);
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(value * (1 << Fixed::_numberOfFractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPoint;
}

void Fixed::setRawBits(int raw)
{
    this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->getRawBits() / (1 << Fixed::_numberOfFractionalBits);
}

int Fixed::toInt(void) const
{
    return this->getRawBits() >> Fixed::_numberOfFractionalBits;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(other.getRawBits());
    return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed &value)
{
    o << value.toFloat();
    return o;
}
