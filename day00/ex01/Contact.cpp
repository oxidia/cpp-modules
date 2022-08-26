#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::Contact(std::string fName, std::string lName, std::string nName, std::string phoneNumber, std::string dSecret)
{
    this->firstName = fName;
    this->lastName = lName;
    this->nickName = nName;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = dSecret;
}
