#include "Span.hpp"

Span::Span(unsigned int n)
{
    this->_maxSize = n;
}

Span::~Span()
{
}

void Span::addNumber(int value)
{
    if (this->_numbers.size() == this->_maxSize)
        throw std::out_of_range("cannot add more values");

    this->_numbers.push_back(value);
}

int Span::shortestSpan(void)
{
    int min;
    int newMin;
    unsigned int i;
    const unsigned int length = this->_numbers.size() - 1;

    if (this->_numbers.size() <= 1)
        throw std::out_of_range("no enough elements");

    min = abs(this->_numbers[1] - this->_numbers[0]);
    for (i = 1; i < length; i++)
    {
        newMin = abs(this->_numbers[i + 1] - this->_numbers[i]);
        if (newMin < min)
            min = newMin;
    }
    return min;
}

int Span::longestSpan(void)
{
    int min;
    int max;

    if (this->_numbers.size() <= 1)
        throw std::out_of_range("no enough elements");

    min = this->_numbers[0];
    max = this->_numbers[0];
    for (size_t i = 1; i < this->_numbers.size(); i++)
    {
        if (this->_numbers[i] < min)
            min = this->_numbers[i];
        if (this->_numbers[i] > max)
            max = this->_numbers[i];
    }
    return max - min;
}
