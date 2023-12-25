#include"Bureaucrat.hpp"
int main()
{
    try
    {
        Bureaucrat khalil("khalil", 150);
        khalil.gradeDown();
        std::cout << khalil ;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << "\n";
    }
}