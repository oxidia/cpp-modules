#pragma once

#include <iostream>

class Fixed
{
private:
    int _fixedPoint;
    static const int _numberOfFractionalBits;

public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int raw);
};
