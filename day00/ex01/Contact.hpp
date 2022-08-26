#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
public:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(void);
    Contact(std::string fName, std::string lName, std::string nName, std::string phoneNumber, std::string dSecret);
};

#endif
