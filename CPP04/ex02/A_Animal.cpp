#include "A_Animal.hpp"

A_Animal::A_Animal() : _type("A_Animal")
{
    std::cout << "A_Animal Default constructor" << std::endl;
}

A_Animal::A_Animal(const A_Animal &other)
{
    _type = other._type;
    std::cout << "A_Animal copy constructor" << std::endl;
}

A_Animal& A_Animal::operator=(const A_Animal &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

A_Animal::~A_Animal()
{
    std::cout << "A-Animal Destructor" << std::endl;
}

void A_Animal::setType(std::string type)
{
    this->_type = type;
    return ;
}

std::string A_Animal::getType(void) const
{
    return this->_type;
}

void    A_Animal::makeSound() const
{
    std::cout << "Generic animal sound!" << std::endl;
}