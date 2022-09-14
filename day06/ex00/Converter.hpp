#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cerrno>
#include <climits>
#include <bits/stdc++.h>
#include <cctype>

class Converter
{
private:
    std::string _strValue;
    char _type;
    int _iValue;
    float _fValue;
    double _dValue;

    int ft_stoi(const std::string &str) const;
    float ft_stof(const std::string &str) const;
    double ft_stod(const std::string &str) const;
    bool isFloatInf(const std::string &str) const;
    bool isDoubleInf(const std::string &str) const;
    bool isFloatNan(const std::string &str) const;
    bool isDoubleNan(const std::string &str) const;
    bool isFloat(const std::string &str) const;
    bool isDouble(const std::string &str) const;

public:
    Converter(const char *str);
    ~Converter();
    operator char() const;
    operator int() const;
    operator float() const;
    operator double() const;
    void tryChar(void) const;
    void tryInt(void) const;
    void tryFloat(void) const;
    void tryDouble(void) const;
};
