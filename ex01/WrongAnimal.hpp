#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(/* args */);
        ~WrongAnimal();
        WrongAnimal & operator=(const WrongAnimal & other);
        WrongAnimal(const WrongAnimal & other);
        std::string getType() const;
        virtual void makeSound() const;
};


#endif