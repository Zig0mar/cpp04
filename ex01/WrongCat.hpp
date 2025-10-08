#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        /* data */
    public:
        WrongCat();
        ~WrongCat();
        WrongCat & operator=(const WrongCat & other);
        WrongCat(const WrongCat & other);
        void    makeSound() const;
};


#endif