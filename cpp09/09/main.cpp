
#include"PmergeMe.hpp"
#include"PmergeMe1.hpp"

int main (int ac, char **av){
    if (ac > 2){
        try{

            PmergeMe merege(av);
            merege.sorte();
            merege.print();
            std::cout << std::endl;
            PmergeMe1 merege1(av);
            merege1.sorte();
            merege1.print();
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
}
