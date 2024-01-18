#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string av){
    input.open("data.csv");
    if(!input.is_open())
        std::cerr << "Error : not found file data\n";
    getline(input, av);
    while(getline(input, av))
    {
        size_t pt = av.find(",");
        if(pt != std::string::npos)
        {
            std::string key = av.substr(0,pt);
            std::string value = av.substr(0,pt);
            data.insert(std::make_pair(key,value));
        }
    }
     for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &other){
    (void) other;
}
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &other){
    (void) other;
    return(*this);
}

BitcoinExchange::~BitcoinExchange(){

}