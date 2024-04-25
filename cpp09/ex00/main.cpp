#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if(ac == 2)
    {
        try{
            BitcoinExchange test;
            test.save_input(av[1]);
        }
        catch(const std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    }
    else 
        std::cerr << "Error: too many args\n";
    return 0;
}
