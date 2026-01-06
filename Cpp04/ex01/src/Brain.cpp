#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain Constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain's Copy Constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj){
    std::cout << "Brain Copy assignment operator called" << std::endl;
         if (this == &obj)
    {
        return (*this);
    }
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return (*this);
}
std::string Brain::getIdea(int index) const{
    return (this->ideas[index]);
}

void Brain::setIdea(int index, std::string src)
{
    this->ideas[index] = src;
}