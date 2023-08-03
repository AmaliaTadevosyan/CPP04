#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : brain(new Brain(*other.brain))
{
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
        *brain = *other.brain;
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Meow! Meow!" << std::endl;
}