#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::Contact(std::string fName, std::string lName, std::string nName, std::string dSecret)
{
    firstName = fName;
    lastName = lName;
    nickName = nName;
    darkestSecret = dSecret;
}
