#include "Form.hpp"

Form::Form(): name("patron"), grad_s (20), grad_ex(25), is_signed(false){
}

Form::Form(std::string N, int g_s, int g_ex):name(N), grad_s(g_s), grad_ex(g_ex)
{
    if (g_s > 150 || g_ex > 150)
        throw Form::GradeTooLowException();
    else if (g_s < 1 || g_ex < 1)
        throw Form::GradeTooHighException();
}

Form::Form(Form const &other) : grad_ex(other.grad_ex), grad_s(other.grad_s){
}

Form &Form::operator=(Form const &other){
    return *this;
}
Form::~Form(){

}

std::string Form::getName(){
    return this->name;
}
int Form::getExcute(){
    return this->grad_ex;
}
int Form::getSing(){
    return this->grad_s;
}
bool Form::getIssigned(){
    return this->is_signed;
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(this->grad_s >= bureaucrat.getGrade() && this->grad_s > 0)
    {
        this->is_signed = true;
    }
    else
        throw Form::GradeTooLowException();
}
std::ostream& operator<<(std::ostream& ostm, Form& form)
{
    ostm << "form name: " << form.getName() << " whether it is signed: " << form.getIssigned() ;
    ostm << " grade sign it: " << form.getSing() << " garde execute: " << form.getExcute();
    return ostm;
}
