#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>

class A_Animal
{
    protected:
        std::string _type;
    public:
        A_Animal();
        A_Animal(const A_Animal &other);
        A_Animal& operator=(const A_Animal &other);
        virtual ~A_Animal();
        void    setType(std::string);
        std::string getType(void) const;
        virtual void    makeSound() const = 0;
};

#endif