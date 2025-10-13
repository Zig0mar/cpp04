#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();
        Animal & operator=(const Animal & other);
        Animal(const Animal & other);
        std::string getType() const;
        virtual void makeSound() const;
};


#endif