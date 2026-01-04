#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain Constructor called";
}
Brain::~Brain()
{
    std::cout << "Brain Destructor called";
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain's Copy Constructor called"
    *this = obj;
}

Brain &operator=(const Brain &obj){
    std::cout << "Brain Copy assignment operator called" << std::endl;
         if (this == &other)
    {
        return (*this);
    }
    for (i = 0; i < 100; i++)
        this->idea[i] = obj[i];
    return (*this);
}
std::string Brain::getIdea(int index) const{
    return (this->index[i]);
}

void Brain::setIdea(int index, std::string src)
{
    this->idea[i] = src;
}