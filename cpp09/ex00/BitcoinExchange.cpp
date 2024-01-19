#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string av){
    // save_data();
    save_input(av);
   
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
void BitcoinExchange::save_data(){
    input.open("data.csv");
    if(!input.is_open())
        std::cerr << "Error : not found file data\n";
    std::string line;
    getline(input, line);
    while(getline(input, line))
    {
        size_t pt = line.find(",");
        if(pt != std::string::npos)
        {
            std::string key = line.substr(0,pt);
            std::string value = line.substr(++pt);
            data[key] = value;
        }
    }
    std::map<std::string, std::string>::iterator it;
    for (it = data.begin(); it != data.end(); ++it) {
        std::cout << it->first << "\n" << it->second << std::endl;
    }
}

void BitcoinExchange::save_input(std::string av){
   input.open(av);
    if(!input.is_open())
        std::cerr << "Error: could not open file.\n";
    std::string line;
    getline(input, line);
    while(getline(input, line))
    {
        size_t pt = line.find("|");
        if(pt != std::string::npos)
        {
            std::string key = line.substr(0,pt);
            std::string value = line.substr(++pt);
            input_data[key] = value;
        }
        else 
            std::cout << "Error: bad input => " << line << std::endl;

    }
    std::map<std::string, std::string>::iterator it;
    for (it = input_data.begin(); it != input_data.end(); ++it) {
    // std::cout << "here\n";

        std::cout << it->first << " | " << it->second << std::endl;
    } 
}