
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bureaucrat("abu abaida", 1);

    AForm *shrubberyForm = new ShrubberyCreationForm("khalil");
    AForm *robotomyForm = new RobotomyRequestForm("youssef");
    AForm *pardonForm = new PresidentialPardonForm("referee");

    try {
        bureaucrat.signForm(bureaucrat, *shrubberyForm);
        shrubberyForm->execute(bureaucrat);

        bureaucrat.signForm(bureaucrat, *robotomyForm);
        robotomyForm->execute(bureaucrat);

        bureaucrat.signForm(bureaucrat,*pardonForm);
        pardonForm->execute(bureaucrat);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    delete(shrubberyForm);
    delete(robotomyForm);
    delete(pardonForm);
    return 0;
}
