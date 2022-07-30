#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "memory address of 'brain': " << &brain << std::endl;
    std::cout << "memory address held by 'brainPTR': " << stringPTR << std::endl;
    std::cout << "memory address held by 'brainREF': " << &stringREF << std::endl;

    std::cout << "value of 'brain': " << brain << std::endl;
    std::cout << "value pointed by 'brainPTR': " << *stringPTR << std::endl;
    std::cout << "value pointed by 'brainREF': " << stringREF << std::endl;
    return (0);
}
