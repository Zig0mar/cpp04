#include "Cat.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat constuctor called" << std::endl;
    _brain = new Brain();
    _type = "Cat";
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat & Cat::operator=(const Cat & other){
    _type = other._type;
    return (*this);
}

Cat::Cat(const Cat & other){
    *this = other;
}

void Cat::makeSound() const{
    std::cout << "Meow Meow Meow" << std::endl;
}
