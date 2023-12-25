#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("default Robtomy", 72, 45), target(target){

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){
    *this = other;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(!getIssigned())
        throw AForm::NotSignedException();
    if(executor.getGrade() > this->getExcute())
        throw AForm::GradeTooLowException();
    if (!(rand() % 2))
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " the robotomy failed." << std::endl;
}