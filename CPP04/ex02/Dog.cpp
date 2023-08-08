#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    _type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : brain(new Brain(*other.brain))
{
    _type = "Dog";
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        _type = other._type;
    }
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