#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
    {
        ideas[i] = "Idea #" + std::to_string(i);
    }
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}

