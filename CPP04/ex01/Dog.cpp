#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : brain(new Brain(*other.brain))
{
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
        *brain = *other.brain;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}