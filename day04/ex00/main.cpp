#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
}

void wrongTest(void)
{
    const WrongAnimal *animal = new WrongAnimal();
    const WrongAnimal *cat = new WrongCat();

    std::cout << animal->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    animal->makeSound();
    cat->makeSound();

    delete animal;
    delete cat;
}

int main(void)
{
    std::cout << "Test" << std::endl;
    test();

    std::cout << "------------------------------" << std::endl;

    std::cout << "Wrong test" << std::endl;
    wrongTest();
    return (0);
}
