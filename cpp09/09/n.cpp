// #include"PmergeMe.hpp"

 PmergeMe:: PmergeMe(){}

PmergeMe::PmergeMe(char **av) : element_size(1){
    int i = 0;
    while(av[++i]){
        std::stringstream ss(av[i]);
        std::string num;
        ss >> num;
        size_t j = 0;
        if(num[j] == '+')
                j++;
        for(; j < num.length(); j++)
        {
            if(!std::isdigit(num[j]))
                throw std::runtime_error("error");
            // std::cout << "here\n";
        }
        if(std::stod(num.c_str(),NULL) > 2147483647)
            throw std::runtime_error("error");
        tmp.push_back(std::stod(num.c_str(),NULL));
    }
}

vector PmergeMe::make_pairs(){
    vector res;
    vec element;
    for(vec::iterator it = tmp.begin(); it !=tmp.end(); ){
        for(size_t i = 0; i < element_size && it != tmp.end(); i++){

            element.push_back(*it);
            it++;
        }
        res.push_back(element);
        element.clear();
    }
    return(res);
}
void PmergeMe::print_res(vector res){
    for (vector::iterator it = res.begin(); it != res.end(); it++){
        std::cout << "vector [";
        for(vec::iterator itr = it->begin(); itr != it->end(); itr++){
            std::cout << *itr << " ";
        }
        std::cout << "]" << std::endl;
    }
}
void PmergeMe::save_tmp(vector res){
    tmp.clear();
    vector::iterator it = res.begin();
    for(; it != res.end(); it++){
        vec::iterator itr = it->begin();
        for(; itr != it->end(); itr++){
            tmp.push_back(*itr);
            }
    }
    
}
bool PmergeMe::compare(vec const &a, vec const &b){
    return a.back() < b.back();
}
void PmergeMe::insert_pend(){
    vector::iterator low;
    vector::iterator it = pend_chain.begin();
    for(;it != pend_chain.end(); ++it) {
        low = std::lower_bound(main_chain.begin(),main_chain.end(), *it, compare);
        main_chain.insert(low, *it);
    }
    if(struggler.size()){
        main_chain.insert(main_chain.end(),struggler);
        struggler.clear();
    }
}
void PmergeMe::insertion(){

    vector res1 = make_pairs();
    if(res1.back().size() != element_size)
    {
        struggler = res1.back();
        res1.pop_back();
    }

    main_chain.clear();
    pend_chain.clear();

    main_chain.reserve(tmp.size());
    pend_chain.reserve(tmp.size());

    main_chain.insert(main_chain.end(), res1[0]);
    main_chain.insert(main_chain.end(), res1[1]);

   for(size_t i = 2; i < res1.size();){
        pend_chain.insert(pend_chain.end(),res1[i]);
        i++;
        if(i < res1.size())
             main_chain.insert(main_chain.end(),res1[i]);
        i++;
    }
    insert_pend();
    save_tmp(main_chain);
    element_size /= 2;

}
void PmergeMe::sort(){
    
    vector res = make_pairs();
    vector::iterator second;
    for (vector::iterator it = res.begin(); it != res.end(); it += 2){
        second = it + 1; 
        if(it->size() != element_size || second->size() != element_size)
            break;
        if(it->back() > second->back())
            std::iter_swap(it, second);
    }
    save_tmp(res);
    if(res[0].size() == element_size && res[1].size() == element_size && res[2].size() == element_size && res[3].size() == element_size )
    {
        element_size *= 2;
        sort();
    }
    insertion();
}
void PmergeMe::print(){
    //   vec::iterator i = tmp.begin();
    for (size_t i = 0;i < tmp.size(); ++i){
        std::cout  << tmp[i] << " ";
    }
    std::cout << std::endl;
}

PmergeMe::~PmergeMe(){}