#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal(/* args */);
        ~Animal();
        Animal & operator=(const Animal & other);
        Animal(const Animal & other);
        std::string getType() const;
        virtual void makeSound() const;
};


#endif