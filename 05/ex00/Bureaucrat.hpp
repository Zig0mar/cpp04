#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & other);
        Bureaucrat(Bureaucrat const & other);
        Bureaucrat(std::string name, int grade);

        std::string getName() const;
        int getGrade() const;
        void GradeUp();
        void GradeDown();
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & a);

#endif