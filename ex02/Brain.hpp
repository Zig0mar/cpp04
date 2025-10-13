#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string _ideas[100];

    public:
        Brain();
        ~Brain();
        Brain (const Brain & other);
        Brain & operator=(const Brain & other);

};


#endif