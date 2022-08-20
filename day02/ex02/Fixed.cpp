#include "Fixed.hpp"

const int Fixed::_numberOfFractionalBits = 8;

Fixed::Fixed(void)
{
    this->setRawBits(0);
}

Fixed::Fixed(int value)
{
    this->setRawBits(value << Fixed::_numberOfFractionalBits);
}

Fixed::Fixed(float value)
{
    this->setRawBits(roundf(value * (1 << Fixed::_numberOfFractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed(void)
{
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
    this->setRawBits(other.getRawBits());
    return *this;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->getRawBits() != other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->getRawBits() >= other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed a(this->toFloat() + other.toFloat());

    return a;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed a(this->toFloat() - other.toFloat());

    return a;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed a(this->toFloat() * other.toFloat());

    return a;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed a(this->toFloat() / other.toFloat());

    return a;
}

Fixed &Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed a(*this);

    ++*this;

    return a;
}

Fixed &Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed a(*this);

    --*this;

    return a;
}

std::ostream &operator<<(std::ostream &o, const Fixed &value)
{
    o << value.toFloat();
    return o;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}
