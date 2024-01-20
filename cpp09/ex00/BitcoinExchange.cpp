#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    data_.open("data.csv");
    if(!data_.is_open()){
        std::cerr << "Error : not found file data\n";
        return ;
    }
    std::string line;
    getline(data_, line);
    while(getline(data_, line))
    {
        size_t pt = line.find(",");
        if(pt != std::string::npos)
        {
            std::string key = line.substr(0,pt);
            std::string value = line.substr(++pt);
            data[key] = std::strtod(value.c_str(), NULL);
        }
        else{
            std::cout << "data: invalide file" << std::endl;
            return ;
        }
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

std::string  BitcoinExchange::trim(std::string const &str){
    size_t start = str.find_first_not_of(" ");
    if (start == std::string::npos)
        return str;
    size_t end = str.find_last_not_of(" ");
    return str.substr(start, end - start +1 );
}

void BitcoinExchange::checkinput(std::string key, float value){
    for(int i = 0; key[i] != '\0'; i++)
    {
        if(!isdigit(key[i]) && key[i] != '-')
            throw std::invalid_argument("Error: bad input => " + key);
    }
    if (key[4] != '-' || key[7] != '-')
        throw std::invalid_argument("Error: bad input => " + key);
    if (value > 1000)
        throw std::invalid_argument("Error: too large a number.");
        else if (value < 0)
            throw std::invalid_argument("Error: not a positive number.");
}

void BitcoinExchange::save_input(std::string const &av){

    std::ifstream input(av.c_str());
    if(!input.is_open()){
        std::cerr << "Error: could not open file.\n";
        exit(1);
    }
    std::string line;
    getline(input, line);
    if (line != "date | value"){
        std::cerr << "Error: first line is not date | value\n";
        input.close();
        exit(1);
    }
    std::string key;
    float value;
    while(getline(input, line))
    {
        size_t pt = line.find("|");
        if (pt == std::string::npos){
            std::cout << "Error: bad input => " + line << std::endl;
            continue;
        }
        key = trim(line.substr(0,pt));
        value = std::strtod(trim(line.substr(++pt)).c_str(), NULL);
        try{
            checkinput(key, value);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            continue;
        }
        std::map<std::string, double>::iterator it =  data.lower_bound(key);
        if (it->first == key){
            double res = it->second * value ;
            std::cout << key << " => " << value << " = "<<  res << std::endl;
        }
        else{
            --it;
            double res = it->second * value ;
            std::cout << key << " => " << value << " = "<<  res << std::endl;
        }

    }
}