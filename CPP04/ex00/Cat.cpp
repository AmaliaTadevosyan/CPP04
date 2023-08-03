#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Meow! Meow!" << std::endl;
}