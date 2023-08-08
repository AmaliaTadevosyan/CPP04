#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    _type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : brain(new Brain(*other.brain))
{
    _type = "Cat";
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        _type = other._type;
    }
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