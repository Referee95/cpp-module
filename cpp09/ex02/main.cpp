#include "PmergeMe.hpp"

int main(int ac, char **av){
    if(ac > 2){
        try{
            PmergeMe    pmrg(av);
            std::vector<int>::iterator it = pmrg.tmp.begin();
            std::cout << pmrg.tmp[0] << " | " <<  pmrg.tmp[1] << std::endl;
            
            for(size_t i = 0; i + 1 < pmrg.tmp.size() ; i= i + 2){
                if(pmrg.tmp[i] && pmrg.tmp[i] > pmrg.tmp[i + 1])
                    std::swap(pmrg.tmp[0] , pmrg.tmp[1]);
            }
            for(; it != pmrg.tmp.end(); it++){
                std::cout << "{" << *it << "}\n";
            }

        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    
}