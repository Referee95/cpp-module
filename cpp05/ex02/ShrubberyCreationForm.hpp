#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include"Bureaucrat.hpp"
#include <fstream>  

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string target;
    public:
        ShrubberyCreationForm(std::string );
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ShrubberyCreationForm&operator=(ShrubberyCreationForm const &);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & ) const;
};
#endif