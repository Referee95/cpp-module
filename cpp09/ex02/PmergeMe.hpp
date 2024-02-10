#pragma once
#include <vector>
#include <iostream>
#include <sstream>
class PmergeMe{
    private:
    public:
        std::vector<int> tmp;
        PmergeMe(char **);
        ~PmergeMe();
        PmergeMe(PmergeMe const &);
        PmergeMe &operator=(PmergeMe const &);
};