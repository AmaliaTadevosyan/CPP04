#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}