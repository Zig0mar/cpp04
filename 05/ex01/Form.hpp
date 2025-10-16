#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
   private:
       
        const std::string _name;
        bool _signature;
        const int _sign_grade;
        const int _exec_grade;

   public:

        Form();
        Form(const Form& other);
        Form & operator=(const Form & other);
        ~Form();

        Form(std::string name, int sign, int exec);
        void beSigned(Bureaucrat & buddy);
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        std::string getName();
};

#endif