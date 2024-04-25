#include"PmergeMe.hpp"

PmergeMe:: PmergeMe(char **av) : element_size(1) {
    int i = 0;
    while (av[++i])
    {
        std::string num;
        std::stringstream ss(av[i]);
        ss >> num;
        int  j = 0;
        if(num[j] == '+')
            j++;
        while (num [j]) 
        {
            if(!isdigit(num[j]))
                throw std::runtime_error("Error");
            j++;
        }
        if(strtod(num.c_str(), NULL) > INT_MAX)
                throw std::runtime_error("Error");
        tmp.push_back(strtod(num.c_str(), NULL));
    }
}

void PmergeMe::print(){
    for(vec::iterator it = tmp.begin(); it != tmp.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
vector PmergeMe::make_pair(){
    vector res;
    vec element;

    for(vec::iterator it = tmp.begin(); it != tmp.end() ; )
    {
        for(size_t i = 0; i < element_size && it != tmp.end(); i++){
            element.push_back(*it);
            it++;
        }
        res.push_back(element);
        element.clear();
    }
    return res;
}

bool PmergeMe::compare(vec const &a, vec const &b){
    return a.back() < b.back();
}
void PmergeMe::insert_pend(){
    vector::iterator lower;
    for(vector::iterator it = pend_chain.begin(); it != pend_chain.end();it++){
        lower = std::lower_bound(main_chain.begin(),main_chain.end(), *it, compare);
        main_chain.insert(lower, *it);
    }
    if(strgguler.size()){
        main_chain.insert(main_chain.end(),strgguler);
        strgguler.clear();
    }
}
void PmergeMe::inesrtion(){
    vector res1 = make_pair();

    if (res1.back().size() != element_size){
        strgguler = res1.back();
        res1.pop_back();
    }
    
    main_chain.clear();
    pend_chain.clear();

    main_chain.reserve(tmp.size());
    pend_chain.reserve(tmp.size());

    main_chain.insert(main_chain.end(), res1[0]);
    main_chain.insert(main_chain.end(), res1[1]);

    
    for (size_t i = 2; i < res1.size();){
        pend_chain.insert(pend_chain.end(), res1[i]);
        i++;
        if(i < res1.size()){
            main_chain.insert(main_chain.end(), res1[i]);
            i++;
        }
    }
    insert_pend();
    save_in_tmp(main_chain);
    element_size /= 2;
}
void PmergeMe::save_in_tmp(vector res){
    tmp.clear();
    vector::iterator it = res.begin();
    for(; it != res.end(); it++){
        vec::iterator itr = it->begin();
        for(; itr != it->end(); itr++){
            tmp.push_back(*itr);
            }
    }
}
vector PmergeMe::sorte(){
    vector res = make_pair();
   for (vector::iterator it = res.begin() ; it != res.end() ; it+=2){
        vector::iterator second = it + 1;
        if(it->size() != element_size || second->size() != element_size)
            break;
        if(it->back() > second->back()){
            std::iter_swap(it, second);
        }
   }
   save_in_tmp(res);
    if(res[0].size() == element_size && res[1].size() == element_size && res[2].size() == element_size && res[3].size() == element_size )
    {
        element_size *=2;
        sorte();
    }
    inesrtion();
    return res;
}

PmergeMe::~PmergeMe(){}