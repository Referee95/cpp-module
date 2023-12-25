#ifndef AFORM_HPP
#define AFORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"

class AForm{
    private:
        const std::string name;
        bool is_signed;
        const int grad_s;
        const int grad_ex;
    public:
        AForm();
        AForm(std::string, int, int);
        AForm(AForm const &);
        AForm &operator=(AForm const &);
        virtual ~AForm();
        std::string getName() const ;
        int getSing();
        int getExcute() const;
        bool getIssigned() const;
        void beSigned(Bureaucrat &);
        class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
        class GradeTooLowException : public Bureaucrat::GradeTooLowException {};
        class NotSignedException : public std::exception {
            const char *what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& ostm, AForm& form);
#endif