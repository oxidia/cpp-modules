#include "Data.hpp"

Data::Data(char c, int i)
    : _c(c), _i(i)
{
}

Data::~Data()
{
}

char Data::getC(void) const
{
    return this->_c;
}

int Data::getI(void) const
{
    return this->_i;
}
