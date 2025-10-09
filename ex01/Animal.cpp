#include "Animal.hpp"

Animal::Animal(): _type("Animal"){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl << std::endl;
}

Animal & Animal::operator=(const Animal & other){
    _type = other._type;
    return (*this);
}

Animal::Animal(const Animal & other){
    *this = other;
}

std::string Animal::getType() const{
    return (_type);
}

void Animal::makeSound() const {
    std::cout << "..." << std::endl;
}
