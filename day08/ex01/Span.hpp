#pragma once

#include <iostream>
#include <vector>
#include <cmath>

class Span
{
private:
    std::vector<int> _numbers;
    unsigned int _maxSize;

public:
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int value);
    template <typename ForwardIt>
    void addRange(const ForwardIt first, const ForwardIt last)
    {
        if (this->_numbers.size() + std::distance(first, last) > this->_maxSize)
            throw std::out_of_range("out of range");
        this->_numbers.insert(this->_numbers.end(), first, last);
    }
    int shortestSpan(void);
    int longestSpan(void);
};
