#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include"Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm&operator=(RobotomyRequestForm const &);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & ) const;
};

#endif