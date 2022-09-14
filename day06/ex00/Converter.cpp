#include "Converter.hpp"

Converter::Converter(const char *str) : _strValue(str)
{
    for (size_t i = 0; i < this->_strValue.length(); i++)
    {
        this->_strValue[i] = tolower(this->_strValue[i]);
    }

    try
    {
        if (this->isFloat(this->_strValue))
        {
            this->_fValue = ft_stof(this->_strValue);
            this->_type = 'f';
        }
        else if (this->isDouble(this->_strValue))
        {
            this->_dValue = ft_stod(this->_strValue);
            this->_type = 'd';
        }
        else
        {
            this->_iValue = ft_stoi(this->_strValue);
            this->_type = 'i';
        }
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
        this->_type = '\0';
    }
}

Converter::~Converter()
{
}

Converter::operator char() const
{
    if (this->_type == '\0' ||
        this->isDoubleInf(this->_strValue) ||
        this->isDoubleNan(this->_strValue) ||
        this->isFloatInf(this->_strValue) ||
        this->isFloatNan(this->_strValue))
        throw std::invalid_argument("char: impossible");

    if (this->_type == 'i')
        return static_cast<char>(this->_iValue);
    if (this->_type == 'f')
        return static_cast<char>(this->_fValue);
    return static_cast<char>(this->_dValue);
}

Converter::operator int() const
{
    if (this->_type == '\0' ||
        this->isDoubleInf(this->_strValue) ||
        this->isDoubleNan(this->_strValue) ||
        this->isFloatInf(this->_strValue) ||
        this->isFloatNan(this->_strValue))
        throw std::invalid_argument("int: impossible");

    if (this->_type == 'i')
        return this->_iValue;
    if (this->_type == 'f')
        return static_cast<int>(this->_fValue);
    return static_cast<int>(this->_dValue);
}

Converter::operator float() const
{
    if (this->_type == '\0')
        throw std::invalid_argument("float: impossible");

    if (this->_type == 'i')
        return static_cast<float>(this->_iValue);
    if (this->_type == 'f')
        return this->_fValue;
    return static_cast<float>(this->_dValue);
}

Converter::operator double() const
{
    if (this->_type == '\0')
        throw std::invalid_argument("double: impossible");

    if (this->_type == 'i')
        return static_cast<double>(this->_iValue);
    if (this->_type == 'f')
        return static_cast<double>(this->_fValue);
    return this->_dValue;
}

void Converter::tryChar(void) const
{
    try
    {
        char charValue = static_cast<char>(*this);

        if (isprint(charValue))
            std::cout << "char: '" << static_cast<char>(charValue) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Converter::tryInt(void) const
{
    try
    {
        int value = static_cast<int>(*this);

        std::cout << "int: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Converter::tryFloat(void) const
{
    try
    {
        float value = static_cast<float>(*this);

        std::cout << std::fixed << std::setprecision(1) << "float: " << value << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Converter::tryDouble(void) const
{
    try
    {
        double value = static_cast<double>(*this);

        std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int Converter::ft_stoi(const std::string &str) const
{
    const char *cStr = str.c_str();
    char *end;
    long value;

    end = NULL;
    errno = 0;
    value = strtol(cStr, &end, 10);
    if (errno == ERANGE || value > INT_MAX || value < INT_MIN)
        throw std::out_of_range("ft_stoi: out_of_range");
    if (errno != 0 || *end != '\0')
        throw std::invalid_argument("ft_stoi: invalid_argument");
    return (static_cast<int>(value));
}

float Converter::ft_stof(const std::string &str) const
{
    const char *cStr = str.c_str();
    char *end;
    float value;

    end = NULL;
    errno = 0;
    value = strtof32(cStr, &end);
    if (*end == 'f' || *end == 'F')
        end++;
    if (errno != 0 || *end != '\0')
        throw std::invalid_argument("ft_stof: invalid_argument");
    return (value);
}

double Converter::ft_stod(const std::string &str) const
{
    const char *cStr = str.c_str();
    char *end;
    double value;

    end = NULL;
    errno = 0;
    value = strtod(cStr, &end);
    if (*end == 'f' || *end == 'F')
        end++;
    if (errno != 0 || *end != '\0')
        throw std::invalid_argument("ft_stod: invalid_argument");
    return (value);
}

bool Converter::isFloatInf(const std::string &str) const
{
    return str == "inff" || str == "+inff" || str == "-inff";
}

bool Converter::isDoubleInf(const std::string &str) const
{
    return str == "inf" || str == "+inf" || str == "-inf";
}

bool Converter::isFloatNan(const std::string &str) const
{
    return str == "nanf" || str == "+nanf" || str == "-nanf";
}

bool Converter::isDoubleNan(const std::string &str) const
{
    return str == "nan" || str == "+nan" || str == "-nan";
}

bool Converter::isFloat(const std::string &str) const
{
    if (this->_strValue.find('.') != std::string::npos && this->_strValue.find('f') != std::string::npos)
        return true;

    if (this->isFloatInf(str))
        return true;

    if (this->isFloatNan(str))
        return true;

    return false;
}

bool Converter::isDouble(const std::string &str) const
{
    if (this->_strValue.find('.') != std::string::npos)
        return true;

    if (this->isDoubleInf(str))
        return true;

    if (this->isDoubleNan(str))
        return true;

    return false;
}
