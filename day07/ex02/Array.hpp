#pragma once

#include <exception>

template <class T>
class Array
{
private:
    T *_elements;
    unsigned int _size;

public:
    Array(void)
    {
        this->_elements = NULL;
        this->_size = 0;
    }

    Array(unsigned int n)
    {
        if (n == 0)
            throw std::invalid_argument("'size' must be greater than 0");

        this->_elements = new T[n];
        this->_size = n;
    }

    Array(const Array &other)
    {
        *this = other;
    }

    Array &operator=(const Array &other)
    {
        this->_size = other.size();

        if (other._elements == NULL)
        {
            this->_elements = NULL;
        }
        else
        {
            this->_elements = new T[this->size()];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                this->_elements[i] = other._elements[i];
            }
        }
        return *this;
    }

    ~Array()
    {
        delete[] this->_elements;
    }

    T &operator[](unsigned int index)
    {
        if (index >= this->size())
            throw std::out_of_range("index out of range");
        return this->_elements[index];
    }

    unsigned int size() const
    {
        return this->_size;
    }
};
