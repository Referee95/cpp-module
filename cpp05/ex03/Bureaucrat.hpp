#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
#include<string>
#include<exception>
class AForm;

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
        std::string getName() const;
        int getGrade() const;
        void gradeUp();
        void gradeDown();
        void signForm(Bureaucrat &, AForm &);
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
        void executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& ostm, Bureaucrat& bureaucrat);

#include "AForm.hpp"
#endif 

