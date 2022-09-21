#pragma once

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack(void) {}

    iterator begin(void)
    {
        return this->c.begin();
    }

    iterator end(void)
    {
        return this->c.end();
    }

    const_iterator cbegin(void) const
    {
        return this->c.cbegin();
    }

    const_iterator cend(void) const
    {
        return this->c.cend();
    }
};
