#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include"PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

class Intern 
{
    public:
        Intern();
        Intern( Intern const &);
        Intern&operator=( Intern const &);
        ~Intern();
        class Internerror : public std::exception
        {
            const char* what() const throw();
        };
        AForm *makeForm(std::string Name_F, std::string target);
};
#endif