#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        RPN rpn;
        rpn.R_P_N(av[1]);
    }
    else 
        std::cerr << "Error\n";
}