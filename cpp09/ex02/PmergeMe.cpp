 #include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av) : element_size(1) {

    int i = 0;
    while(av[++i]){
        std::stringstream ss(av[i]);
        std::string num;
        ss >> num;

        size_t j = 0;
        if(num[j] == '+')
            j++;
        for(; j < num.length(); j++){
            if(!std::isdigit(num[j]))
                throw std::runtime_error("Error: invalid input");
            // std::cout <<"(" <<  num[j]  << ")" << std::endl;
        }
        if(std::strtod(num.c_str(), NULL) > 2147483647)
            throw std::runtime_error("Error: invalid input");
        tmp.push_back(std::strtod(num.c_str(), NULL));
    }
    
}
PmergeMe::~PmergeMe(){

}
vector PmergeMe::make_pairs(){
    vector res;
    vec element;
    for(vec::iterator it = tmp.begin(); it != tmp.end();)
    {
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
    vector::iterator it = res.begin();
    std::cout << "vecofvec" << std::endl;
    for(;it != res.end(); it++){
        std::cout << "vec[";
        vec::iterator itt = it->begin();
        for(;itt != it->end() ;itt++){
            std::cout << *itt << " ";
        }
        std::cout << "]\n";
    }
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

bool PmergeMe::compare( vec const &a,  vec const & b){
    return a.back() < b.back();
}

void PmergeMe::insert_pend(){
    vector::iterator low;
    std::vector<std::pair<vec, vector::iterator> >::iterator it = pend_chain.begin();
    
    for (;it != pend_chain.end();++it){
        low = std::lower_bound(main_chain.begin(), main_chain.end(), it->first, compare);
        main_chain.insert(low, it->first);
    }
    if (struggler.size()){
        main_chain.push_back(struggler);
        struggler.clear();
    }
}
void PmergeMe::insertion(){
    vector res1 = make_pairs();
    print_res(res1);
    if (res1.back().size() != element_size){
        struggler = res1.back();
        res1.pop_back();
    }
    std::pair<vec, vector::iterator> pend;
    
    main_chain.clear();
    pend_chain.clear();

    main_chain.reserve(tmp.size());
    pend_chain.reserve(tmp.size());

    main_chain.insert(main_chain.end(), res1[0]);
    main_chain.insert(main_chain.end(), res1[1]);
    
    
    for(size_t i = 2; i < res1.size();){
        pend.first = res1[i];
        pend.second = main_chain.end();
        i++;
        if(i < res1.size())
            pend.second  = main_chain.insert(main_chain.end(),res1[i]);
        pend_chain.push_back(pend);
        i++;
    }
    insert_pend();
    save_in_tmp(main_chain);
    // print_res(main_chain);
    // print(); std::cout << std::endl;
    element_size /= 2;
}

void PmergeMe::sort(){

    vector res = make_pairs();
    vector::iterator it = res.begin();
    vector::iterator second;
   
    for (; it != res.end() ;it += 2 ){
        second = it + 1;
        if (it->size() != element_size || second->size() != element_size)
            break;
        if(it->back() > second->back())
        {
            // vec tmp1 = (*it);
            // (*it) = (*second);
            // (*second) = tmp1;
            std::iter_swap(it, second);
        }
    }
    save_in_tmp(res);
    if(res[0].size() == element_size && res[1].size() == element_size && res[2].size() == element_size && res[3].size() == element_size){
        element_size *= 2;
        sort();
    }

    insertion();
}

PmergeMe::PmergeMe(PmergeMe const &other){
    (void)other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &other){
    (void)other;
    return *this;
}