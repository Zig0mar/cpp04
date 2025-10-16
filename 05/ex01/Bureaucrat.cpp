#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other){
    _grade = other._grade;
    return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade too low ! (should be between 1 and 150 included)");
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade too high ! (should be between 1 and 150 included)");
}

Bureaucrat::Bureaucrat(Bureaucrat const & other){
    *this = other;
}

std::string Bureaucrat::getName() const{
    return(_name);
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

std::ostream &  operator<< (std::ostream & o, Bureaucrat const & a){
    o <<  a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
    return (o);
}

void Bureaucrat::GradeDown(){
    if ((_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

void Bureaucrat::GradeUp(){    
    if ((_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::signForm(Form form){
    try
    {
        form.beSigned(*this);
    }
    catch (const std::exception& e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because ";
        std::cout << e.what() << '\n';
    }
}
