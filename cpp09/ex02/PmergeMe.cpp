#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    std::cout << "i'm constructer\n";
}
PmergeMe::~PmergeMe(){

}
PmergeMe::PmergeMe(PmergeMe const &other){
    (void)other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &other){
    (void)other;
    return *this;
}