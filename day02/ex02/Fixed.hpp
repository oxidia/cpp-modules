#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPoint;
    static const int _numberOfFractionalBits;

public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed &other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int raw);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed &operator=(const Fixed &other);
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, const Fixed &value);
