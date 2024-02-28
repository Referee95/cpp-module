#pragma once

// #include "PmergeMe.hpp"
#include<list>
#include<vector>
#include <iostream>
#include<sstream>
#include <algorithm>
#include <climits>

typedef std::list<std::list <int> > list;
typedef std::list<int> lst;

class PmergeMe1{
    private:
        lst tmp;
        size_t element_size ;
        list main_chain;
        list pend_chain;
        lst strgguler;
    public:
    PmergeMe1(char **);
    ~PmergeMe1();
    void print();
    void print(lst);
    list make_pair();
    void print_res(list);
    static bool compare(lst const &, lst const &);
    void save_in_tmp(list);
    void inesrtion();
    void insert_pend();
    void sorte();
};