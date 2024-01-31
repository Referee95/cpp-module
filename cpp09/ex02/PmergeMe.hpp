#pragma once

#include <iostream>

class PmergeMe{
    private:

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &);
        PmergeMe &operator=(PmergeMe const &);
};