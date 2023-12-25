#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
#include<string>
#include<exception>
class Form;

class Bureaucrat
{
    private :
        const std::string name;
        int grade;
    public :
        Bureaucrat();
        Bureaucrat(std::string , int );
        Bureaucrat(Bureaucrat const & );
        Bureaucrat&operator=(Bureaucrat const & );
        ~Bureaucrat();
        std::string getName();
        int getGrade();
        void gradeUp();
        void gradeDown();
        void signForm(Bureaucrat &, Form &);
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& ostm, Bureaucrat& bureaucrat);

#include "Form.hpp"
#endif 

