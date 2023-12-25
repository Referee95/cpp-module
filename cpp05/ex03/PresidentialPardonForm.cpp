#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default Presidential",145, 137) 
{
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) 
{
    
}
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other){
    *this = other;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){

}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(!getIssigned())
        throw AForm::NotSignedException();
    if(executor.getGrade() > this->getExcute())
        throw AForm::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;       
}