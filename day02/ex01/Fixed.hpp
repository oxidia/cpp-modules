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
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &value);
