
#include"PmergeMe.hpp"
#include"PmergeMe1.hpp"

int main (int ac, char **av){

    if (ac > 1){
        try{

            PmergeMe merege(av);
            std::cout << "Before: ";
            merege.print();
            PmergeMe1 merege1(av);
            clock_t start_time, end_time;
            double cpu_time_used;
            start_time = clock();
            merege.sorte();
            end_time = clock();
            std::cout << "After: ";
            merege.print();
            cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
            std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << cpu_time_used << " us"<< std::endl;
            start_time = clock();
            merege1.sorte();
            end_time = clock();
            cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
            std::cout << "Time to process a range of " << ac - 1 << " elements with std::list : " << cpu_time_used<< " us"<< std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    else 
        std::cerr << "Error: too many args\n";

    return 0;
}
