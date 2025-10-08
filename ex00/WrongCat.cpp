#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    std::cout << "WrongCat constuctor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & other){
    _type = other._type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat & other){
    *this = other;
}

void WrongCat::makeSound() const{
    std::cout << "Miaou Miaou Miaou" << std::endl;
}
