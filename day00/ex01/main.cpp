#include <iostream>
#include "PhoneBook.hpp"
#include <string>
#include <cstdlib>
#include <cctype>

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
    if (value.length() == 0)
        throw std::invalid_argument("invalid index");
    for (size_t i = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]))
            throw std::invalid_argument("invalid index");
    }
    return (atoi(value.c_str()));
}

static void addContact(PhoneBook &phoneBook)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string darkestSecret;

    firstName = readString("First name: ");
    lastName = readString("Last name: ");
    nickName = readString("Nick name: ");
    darkestSecret = readString("Darkest secret: ");

    if (firstName.length() == 0 || lastName.length() == 0 || nickName.length() == 0 || darkestSecret.length() == 0)
    {
        std::cerr << "Cannot add account with empty fields" << std::endl;
    }
    else
    {
        phoneBook.addContact(Contact(firstName, lastName, nickName, darkestSecret));
    }
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

    try
    {
        displayContacts(phoneBook.getContacts(), phoneBook.getContactsCount());
        index = readInteger("Choose an index: ");
        contact = phoneBook.getContactAt(index);
        displayContactDetails(contact);
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << "invalid index" << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << "There is no entry at index " << index << std::endl;
    }
}

static void execute(PhoneBook &phoneBook, const std::string &command)
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
    PhoneBook phoneBook;

    while (true)
    {
        command = readString("$> ");
        execute(phoneBook, command);
    }
    return (0);
}
