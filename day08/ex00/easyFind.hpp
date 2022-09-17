#pragma once

// https://stackoverflow.com/questions/7728478/c-template-class-function-with-arbitrary-container-type-how-to-define-it
// https://en.cppreference.com/w/cpp/language/dependent_name

#include <exception>

template <typename T>
int easyFind(T container, int toFind)
{
    typename T::const_iterator it;
    typename T::const_iterator endIt;

    it = container.begin();
    endIt = container.end();

    while (it != endIt)
    {
        if (*it == toFind)
            return toFind;
        ++it;
    }

    throw std::exception();
}
