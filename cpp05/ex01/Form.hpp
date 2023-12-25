#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"


class Form{
    private:
        const std::string name;
        bool is_signed;
        const int grad_s;
        const int grad_ex;
    public:
        Form();
        Form(std::string, int, int);
        Form(Form const &);
        Form &operator=(Form const &);
        ~Form();
        std::string getName();
        int getSing();
        int getExcute();
        bool getIssigned();
        void beSigned(Bureaucrat &);
        class GradeTooHighException : public Bureaucrat::GradeTooHighException {};
        class GradeTooLowException : public Bureaucrat::GradeTooLowException {};
};
std::ostream& operator<<(std::ostream& ostm, Form& form);
#endif