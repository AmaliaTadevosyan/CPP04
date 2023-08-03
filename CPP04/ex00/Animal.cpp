#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
    _type = other._type;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

void Animal::setType(std::string type)
{
    this->_type = type;
    return ;
}

std::string Animal::getType(void) const
{
    return this->_type;
}
void    Animal::makeSound() const
{
    std::cout << "Generic animal sound!" << std::endl;
}