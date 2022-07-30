#include <iostream>
#include "PhoneBook.hpp"
#include <string>
#include <cstdlib>

static std::string readString(std::string prompt)
{
    std::string value;

    std::cout << prompt;
    std::getline(std::cin, value);
    return (value);
}

static int readInteger(std::string prompt)
{
    std::string value;

    std::cout << prompt;
    std::getline(std::cin, value);
    return (atoi(value.c_str()));
}

static void addContact(PhoneBook &phoneBook)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;

    firstName = "helloworld"; // readString("First name: ");
    lastName = "helloworld111111"; // readString("Last name: ");
    nickName = "hello-world"; // readString("Nick name: ");
    darkestSecret = "none"; // readString("Darkest secret: ");

    phoneBook.addContact(Contact(firstName, lastName, nickName, darkestSecret));
}

static void displayField(std::string value)
{
    std::string spaces;

    if (value.length() < 10)
    {
        spaces.insert(0, 10 - value.length(), ' ');
        std::cout << spaces << value;
    }
    else if (value.length() == 10)
        std::cout << value;
    else
        std::cout << value.substr(0, 9) << ".";
}

static void displayContacts(Contact *contacts, int count)
{
    Contact *contact;
    int i;

    for (i = 0; i < count; i++)
    {
        contact = &contacts[i];
        std::cout << "         " << i;
        std::cout << '|';
        displayField(contact->firstName);
        std::cout << '|';
        displayField(contact->lastName);
        std::cout << '|';
        displayField(contact->nickName);
        std::cout << '|' << std::endl;
    }
}

static void displayContactDetails(Contact contact)
{
    std::cout << "First name: " << contact.firstName << std::endl;
    std::cout << "Last name: " << contact.lastName << std::endl;
    std::cout << "Nick name: " << contact.nickName << std::endl;
    std::cout << "Darkest secret: " << contact.darkestSecret << std::endl;
}

static void searchContact(PhoneBook &phoneBook)
{
    Contact contact;
    int index;

    displayContacts(phoneBook.getContacts(), phoneBook.getContactsCount());
    index = readInteger("Choose an index: ");
    try
    {
        contact = phoneBook.getContactAt(index);
        displayContactDetails(contact);
    }
    catch(...)
    {
        std::cerr << "There is no entry at index " << index << std::endl;
    }
}

static void execute(PhoneBook &phoneBook, std::string command)
{
    if (command.compare("ADD") == 0)
        addContact(phoneBook);
    else if (command.compare("SEARCH") == 0)
        searchContact(phoneBook);
    else if (command.compare("EXIT") == 0)
        exit(0);
}

int main(void)
{
    std::string command;
    PhoneBook   phoneBook;

    while (true)
    {
        command = readString("$> ");
        execute(phoneBook, command);
    }
    return (0);
}
