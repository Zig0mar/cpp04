# include "Form.hpp"
        
Form::Form(): _sign_grade(0), _exec_grade(0), _signature(false){
    std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const Form & other): _sign_grade(other._sign_grade), _exec_grade(other._exec_grade){
    *this = other;
}

Form & Form::operator=(const Form & other){
    _signature = other._signature;
}

Form::~Form(){
    std::cout << _name << " Form destructor called" << std::endl;
}

Form::Form(std::string name, int sign, int exec): _name(name), _sign_grade(0), _exec_grade(0), _signature(false){
    std::cout << _name << " Form constructor called" << std::endl;
    if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
    else if (sign < 0 || exec < 0)
        throw Form::GradeTooHighException();
}

void Form::beSigned(Bureaucrat & buddy){
    if (buddy.getGrade() > _sign_grade)
        throw Form::GradeTooLowException();
    else 
        _signature = true;
}

std::string Form::getName(){
    return (_name);
}