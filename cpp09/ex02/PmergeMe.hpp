#pragma once
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
//define vectors
typedef std::vector<std::vector<int> > vector;
typedef std::vector<int> vec;

class PmergeMe{
    private:
        size_t element_size;
        vector main_chain;
        vec struggler;
        std::vector<std::pair<vec, vector::iterator> > pend_chain;
    public:
        vec tmp;
        PmergeMe(char **);
        void sort();
        vector make_pairs();
        void print_res(vector);
        void save_in_tmp(vector );
        void insertion();
        void insert_pend();
        void print(vec);
        ~PmergeMe();
        PmergeMe(PmergeMe const &);
        static bool compare( vec const & ,  vec const &);
        PmergeMe &operator=(PmergeMe const &);
};