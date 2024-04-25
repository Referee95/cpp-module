#pragma once
#include<vector>
#include <iostream>
#include<sstream>
#include <climits>
typedef std::vector <std::vector<int> > vector;
typedef std::vector <int> vec ;
class PmergeMe {
    private:
        vec tmp;
        size_t element_size ;
        vector main_chain;
        vector pend_chain;
        vec strgguler;

    public:

        void save_in_tmp(vector );
        void print();
        vector make_pair();
        vector sorte();
        void inesrtion();
        void insert_pend();
        static bool compare(vec const &, vec const &);
        PmergeMe(char **);
        ~PmergeMe();
};
