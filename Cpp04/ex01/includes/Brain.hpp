#pragma once

#include <string>
#include <iostream>

class Brain{
    private:
        std::string	ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain &obj);
        Brain(const Brain *obj);
		Brain &operator=(const Brain &obj);
        std::string getIdea(int index) const;
        void setIdea(int index, std::string src);
};