
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     currentIndex;
    int     contactsCounts;
public:
    PhoneBook(void);
    void    addContact(Contact contact);
    Contact *getContacts(void);
    Contact &getContactAt(int index);
    int     getContactsCount(void);
};

#endif
