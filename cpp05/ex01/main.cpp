#include"Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        Form form("youssef", 20, 25);
        Bureaucrat khalil("referee", 50); 
        khalil.gradeUp();
        khalil.signForm(khalil,form);
        std::cout << form << "\n";
        std::cout << khalil ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }

}