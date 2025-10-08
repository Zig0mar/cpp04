#include "Dog.hpp"

Dog::Dog(): Animal(){
    _type = "Dog";
}

Dog::~Dog(){

}

Dog & Dog::operator=(const Dog & other){
    _type = other._type;
    return (*this);
}

Dog::Dog(const Dog & other){
    *this = other;
}

void Dog::makeSound() const{
    std::cout << "Waf Waf Waf" << std::endl;
}
