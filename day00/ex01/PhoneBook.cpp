
#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    this->currentIndex = 0;
    this->contactsCounts = 0;
}

void PhoneBook::addContact(Contact contact)
{
    this->contacts[this->currentIndex] = contact;
    this->currentIndex += 1;

    if (this->currentIndex > 7)
        this->currentIndex = 0;
    if (this->contactsCounts < 8)
        this->contactsCounts++;
}

Contact *PhoneBook::getContacts(void)
{
    return this->contacts;
}

Contact &PhoneBook::getContactAt(int index)
{
    if (index < 0 || index >= this->currentIndex)
        throw std::out_of_range("index value out of range");
    return this->contacts[index];
}

int PhoneBook::getContactsCount(void)
{
    return this->contactsCounts;
}
