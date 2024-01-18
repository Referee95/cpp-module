#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<map>
#include <fstream>
#include <string>
class BitcoinExchange{
    
    private:
    std::map<std::string, std::string> data;
    std::ifstream input;

    public:
    BitcoinExchange(std::string);
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &);
    BitcoinExchange&operator=(BitcoinExchange const &);
};
#endif