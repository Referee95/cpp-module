
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include"Intern.hpp"


int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("RobotomyRem", "Bender");
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}