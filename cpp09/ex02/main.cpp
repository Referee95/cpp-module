#include "PmergeMe.hpp"

int main(int ac, char **av){
    if(ac > 2){
        try{
            PmergeMe    pmrg(av);
            std::vector<int>::iterator it = pmrg.tmp.begin();
            std::cout << pmrg.tmp[0] << " | " <<  pmrg.tmp[1] << std::endl;
            if(pmrg.tmp[0] > pmrg.tmp[1])
                std::swap(pmrg.tmp[0] , pmrg.tmp[1]);
            for(;it != pmrg.tmp.end(); it++){
                // std::cout << "=> "<<*it << std::endl;
            }
            
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    
}