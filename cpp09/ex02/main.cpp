#include "PmergeMe.hpp"

void PmergeMe::print(vec tmp){
    //   vec::iterator i = tmp.begin();
    for (size_t i = 0;i < tmp.size(); ++i){
        std::cout  << tmp[i] << " ";
    }
    std::cout << std::endl;
}
int main(int ac, char **av){
    if(ac > 2){
        try{
            PmergeMe    pmrg(av);

            pmrg.sort();
            pmrg.print(pmrg.tmp);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    
    
}