#ifndef _HARL_HPP_
#define _HARL_HPP_

#include <iostream>
#include <string>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void printTitle(std::string title);

public:
    typedef void (Harl::*HarlFunction)(void);
    void complain(std::string level);
};

#endif
