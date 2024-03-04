#include "PmergeMe1.hpp"

PmergeMe1::~PmergeMe1(){}

void PmergeMe1::print(){
    for(lst::iterator it = tmp.begin(); it != tmp.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe1::print(lst tmp1){
    for(lst::iterator it = tmp1.begin(); it != tmp1.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

PmergeMe1:: PmergeMe1(char **av) : element_size(1){
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
                throw std::runtime_error("Error1");
        tmp.push_back(strtod(num.c_str(), NULL));
    }
}
list PmergeMe1::make_pair(){
    list res;
    lst element;

    for(lst::iterator it = tmp.begin(); it != tmp.end() ; )
    {
        for(size_t i = 0; i < element_size && it != tmp.end(); i++){
            element.push_back(*it);
            it++;
        }
        // std::cout << "here\n";
        res.push_back(element);
        element.clear();
    }
    return res;
}
void PmergeMe1::print_res(list res){
    for(list::iterator it = res.begin(); it != res.end() ; it++)
    {
        std::cout << "vector [ " ;
        for(lst::iterator itr = it->begin(); itr != it->end(); itr++){
            std::cout << *itr<< " " ;
            
        }
        std::cout << " ]\n" ;
    }
}
bool PmergeMe1::compare(lst const &a, lst const &b){
    return a.back() < b.back();
}
void PmergeMe1::insert_pend(){
    // print_res(main_chain);
    list::iterator lower;
    for(list::iterator it = pend_chain.begin(); it != pend_chain.end();it++){
        lower = std::lower_bound(main_chain.begin(),main_chain.end(), *it, compare);
        main_chain.insert(lower, *it);
    }
    if(strgguler.size()){
        main_chain.insert(main_chain.end(),strgguler);
        strgguler.clear();
    }
}
void PmergeMe1::inesrtion(){
    list res1 = make_pair();

     
    main_chain.clear();
    pend_chain.clear();

    list::iterator it = res1.begin();
    if(it != res1.end()){
        main_chain.insert(main_chain.end(), *it);
        it++;
    }
     if(it != res1.end()){
    main_chain.insert(main_chain.end(), *it);
    it++;
     }
    
    for (; it != res1.end();){
        // std::cout << "here\n";
        pend_chain.insert(pend_chain.end(), *it);
        it++;
        if(it != res1.end()){
            main_chain.insert(main_chain.end(), *it);
            it++;
        }
    }

    insert_pend();
    save_in_tmp(main_chain);
    // print_res(main_chain);
    element_size /= 2;
}
void PmergeMe1::save_in_tmp(list res){
    tmp.clear();
    list::iterator it = res.begin();
    for(; it != res.end(); it++){
        lst::iterator itr = it->begin();
        for(; itr != it->end(); itr++){
            tmp.push_back(*itr);
            }
    }
}
void PmergeMe1::sorte(){
    list res = make_pair();
   for (list::iterator it = res.begin() ; it != res.end();std::advance(it, 2)){
        list::iterator second = std::next(it);
        if (second == res.end())
            break;
        // it--;
        if(it->size() != element_size || second->size() != element_size)
            break;
        if(it->back() > second->back())
            std::iter_swap(it, second);
   }
   save_in_tmp(res);
    list::iterator it = res.begin();
    if(it->size() == element_size && (++it)->size() == element_size && (++it)->size() == element_size && (++it)->size() == element_size )
    {
        element_size *=2;
        sorte();
    }
    inesrtion();
            // print_res(res);

}