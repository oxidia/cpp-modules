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
    ~Span();

    void addNumber(int value);
    template <class ForwardIt>
    ForwardIt addNumbers(ForwardIt first, ForwardIt last);
    int shortestSpan(void);
    int longestSpan(void);
};
