#pragma once

#include <iostream>
#include <string>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain(void);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
};
