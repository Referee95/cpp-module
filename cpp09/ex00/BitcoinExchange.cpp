#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    std::ifstream data_("data.csv");
    if(!data_.is_open()){
        throw std::invalid_argument("Error : not found file data");
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
        else
            throw std::invalid_argument("data: invalide file");
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

void BitcoinExchange::checkinput(std::string line, std::string key, std::string value){
    if(value.empty())
        throw std::invalid_argument("Error: bad input => " + line);
    for(int i = 0; key[i] != '\0'; i++)
    {
        if(!isdigit(key[i]) && key[i] != '-')
            throw std::invalid_argument("Error: bad input => " + line);
    }
    if (key[4] != '-' || key[7] != '-')
        throw std::invalid_argument("Error: bad input => " + line);
    int j = 0;
    for(int i = 1; value[i] != '\0'; i++)
    {
        if(!isdigit(value[i]) && value[i] != '.')
            throw std::invalid_argument("Error: bad input => " + line);
        if(value[i] == '.')
            j++;
    }
    if((!isdigit(value[0]) && value[0] != '+' && value[0] != '-') || j > 1)
            throw std::invalid_argument("Error: bad input => " + line);
    int year = std::strtod(key.substr(0,4).c_str(), NULL);
    int month = std::strtod(key.substr(5,7).c_str(), NULL);
    int day = std::strtod(key.substr(8).c_str(), NULL);
    if((year < 2009 || year > 2024) || (month < 0 || month > 12) || (day < 1 || day > 31))
        throw std::invalid_argument("Error: bad input => " + line);

}

void BitcoinExchange::save_input(std::string const &av){

    std::ifstream input(av.c_str());
    if(!input.is_open())
            throw std::invalid_argument("Error : can't open =>  " + av);

    std::string line;
    getline(input, line);
    if (line != "date | value"){
        input.close();
        throw std::invalid_argument("Error: first line is not date | value");
    }
    std::string key;
    std::string value;
    while(getline(input, line))
    {
        size_t pt = line.find("|");
        if (pt == std::string::npos){
            std::cout << "Error: bad input => " + line << std::endl;
            continue;
        }
        key = trim(line.substr(0,pt));
        value = trim(line.substr(++pt));
        try{
            checkinput(line, key, value);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
            continue;
        }
        double vl = std::strtod(value.c_str(), NULL);
        if(vl < 0 || vl > 1000)
        {
         if (vl > 1000)
            std::cout << "Error: too large a number.\n";
        else if (vl < 0)
            std::cout << "Error: not a positive number.\n";
            continue;
        }
        std::map<std::string, double>::iterator it =  data.lower_bound(key);
        if (it->first == key){
            double res = it->second * vl ;
            std::cout << key << " => " << vl << " = "<<  res << std::endl;
        }
        else{
            --it;
            double res = it->second * vl ;
            std::cout << key << " => " << vl << " = "<<  res << std::endl;
        }

    }
}