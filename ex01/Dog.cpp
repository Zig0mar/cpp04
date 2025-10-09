#include "Dog.hpp"

Dog::Dog(): Animal(){
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog & Dog::operator=(const Dog & other){
    _type = other._type;
    _brain = other._brain;
    return (*this);
}

Dog::Dog(const Dog & other){
    *this = other;
}

void Dog::makeSound() const{
    std::cout << "Waf Waf Waf" << std::endl;
}
