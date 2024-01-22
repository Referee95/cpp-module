#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<map>
#include <fstream>
#include <string>
class BitcoinExchange{
    
    private:
    std::map<std::string, double> data;
    std::ifstream data_;


    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &);
    BitcoinExchange&operator=(BitcoinExchange const &);
    void save_input(std::string const &);
    std::string trim(std::string const &);
    void checkinput(std::string , std::string );
};
#endif