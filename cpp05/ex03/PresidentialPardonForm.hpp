#ifndef PRESIDENTAILPARDONFORM_HPP
#define PRESIDENTAILPARDONFORM_HPP

#include "AForm.hpp"
#include"Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        const std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & ) const;
};

#endif