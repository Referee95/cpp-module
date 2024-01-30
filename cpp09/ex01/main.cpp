#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        try{
            RPN rpn;
            int num = rpn.R_P_N(av[1]);
            std::cout << num << std::endl;
        }
        catch(const std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }
    else 
        std::cerr << "Error\n";
}