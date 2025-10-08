#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other){
    _type = other._type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal & other){
    *this = other;
}

std::string WrongAnimal::getType() const{
    return (_type);
}

void WrongAnimal::makeSound() const {
    std::cout << "???" << std::endl;
}
