#include "AForm.hpp"

AForm::AForm(): name("patron"), grad_s (20), grad_ex(25), is_signed(false){
}

AForm::AForm(std::string N, int g_s, int g_ex):name(N), grad_s(g_s), grad_ex(g_ex)
{
    if (g_s > 150 || g_ex > 150)
        throw AForm::GradeTooLowException();
    else if (g_s < 1 || g_ex < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm(AForm const &other) : grad_ex(other.grad_ex), grad_s(other.grad_s){
}

AForm &AForm::operator=(AForm const &other){
    return *this;
}

AForm::~AForm(){

}

const char *AForm::NotSignedException::what() const throw()
{
    return "Grade not signed";
}

std::string AForm::getName() const {
    return this->name;
}
int AForm::getExcute()const{
    return this->grad_ex;
}
int AForm::getSing(){
    return this->grad_s;
}
bool AForm::getIssigned()const{
    return this->is_signed;
}
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if(this->grad_s >= bureaucrat.getGrade() && this->grad_s > 0)
    {
        this->is_signed = true;
    }
    else
        throw AForm::GradeTooLowException();
}
std::ostream& operator<<(std::ostream& ostm, AForm& form)
{
    ostm << "form name: " << form.getName() << " whether it is signed: " << form.getIssigned() ;
    ostm << " grade sign it: " << form.getSing() << " garde execute: " << form.getExcute();
    return ostm;
}
void AForm::execute(Bureaucrat const & executor) const{
    
}