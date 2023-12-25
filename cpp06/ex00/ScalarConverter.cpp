
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
}

ScalarConverter::ScalarConverter( const ScalarConverter & other){
	*this = other;
}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const & other ){
	(void) other;
	return *this;
}

ScalarConverter::~ScalarConverter(){
}

int ScalarConverter::get_type(std::string str)
{
	int j = str.length();
	int i = 0;
	int comma = 0;
	int f = 0;
	int alpha = 0;
	if (j == 1){
		if(isprint(str[0]))
		{
			if(!isdigit(str[0]))
			return 1;
		}
	}
	if(str[i] == '+' && str[i + 1] != '\0')
		i++;
	while(str[i])
	{
		if(!isdigit(str[i]))
			break ;
		i++;
		if(str[i] == '\0') 
			return 2;
	}
	while(str[i])
	{
		if(!isdigit(str[i]) && str[i] != '.' && str[j - 1] != 'f')
			break ;
		if(str[i] == '.')
			comma++;
		i++;
	}
	j = 0;
	if(str[j] == '+' && str[j + 1] != '\0')
		j++;
	while(str[j])
	{
		if(isalpha(str[j]))
			alpha++;
		if(str[j] == 'f' || str[j] == '-')
			f++;
		j++;
	}
	if (str == "-inff" || str == "+inff" || str == "-inf" || str == "+inf" || str == "nan")
		return 5;
	if(f > 1)
		return 0;
	if(comma == 1 && str[i] == '\0')
	{
		i = 0;
		while(str[i] && str[i] != '.')
			i++;
		if(i > 39)
			return 4;
		return 3;
	}
	else if(comma == 0 && str[i] == '\0' && alpha == 1)
		return 3;
	return 0;
}

void ScalarConverter::print_char(char c, int i)
{
	if(i == 0)
		std::cout << "char : impossible\n";
	else if(c >= 32 && c <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" <<  std::endl;
}

void ScalarConverter::print_int(double n){
	std::cout << std::fixed << std::setprecision(0);
	if(n <= -2147483647 || n >= 2147483647)
		std::cout << "int : impossible\n";
	else
		std::cout << "int: " << n << std::endl;
}

void ScalarConverter::print_float(float f, int p){
	if (p == 0)
		p++;
	std::cout << std::fixed << std::setprecision(p);
	std::cout << "float: " << f << "f" << std::endl;
}

void ScalarConverter::print_double(double d, int p){
	if (p == 0)
		p++;
	std::cout << std::fixed << std::setprecision(p);
	std::cout << "double: "  << d <<  std::endl;
}

void ScalarConverter::convert_char(char c, int p){
	ScalarConverter k;
	k.print_char(c,1);
	k.print_int(static_cast<int>(c));
	k.print_float(static_cast<float>(c), p);
	k.print_double(static_cast<double>(c), p);
}

void ScalarConverter::convert_int(double i, int p){
	ScalarConverter k;
	if(i < 256 )
		k.print_char(static_cast<char>(i),1);
	else
		k.print_char(static_cast<char>(287),1);
	k.print_int(static_cast<int>(i));
	k.print_float(static_cast<float>(i), p);
	k.print_double(static_cast<double>(i), p);
}

void ScalarConverter::convert_float(double i, int p){
	ScalarConverter k;
	if(i < 256 )
		k.print_char(static_cast<char>(i),1);
	else
		k.print_char(static_cast<char>(287),1);
	k.print_int(static_cast<int>(i));
	k.print_float(i, p);
	k.print_double(static_cast<double>(i), p);
}

void ScalarConverter::convert_double(double i, int p){
	ScalarConverter k;
	if(i < 256 )
		k.print_char(static_cast<char>(i),1);
	else
		k.print_char(static_cast<char>(287),1);
	k.print_int(static_cast<int>(i));
	k.print_float(static_cast<float>(i), p);
	k.print_double(i, p);
}
void ScalarConverter::convert_inff(double i, int p){
	ScalarConverter k;
	k.print_char(static_cast<char>(i), 0);
	k.print_int(static_cast<int>(i));
	k.print_float(static_cast<float>(i), p);
	k.print_double(i, p);
}
int ScalarConverter::precision(std::string str){
	int i = 0;
	int j = -1;
	while(str[i] && str[i] != '.')
		i++;
	if(str[i] == '\0')
		return 0;
	while(str[i])
	{
		i++;
		j++;
	}
	return j;
}
void ScalarConverter::convert(std::string str){
	ScalarConverter k;
	int type = k.get_type(str);
	if (type == 0)
		std::cout << "input unvalid\n";
	int p = precision(str);
	char c = str[0];
	double f = std::strtod(str.c_str(), NULL);
	switch(type){
		case 1:
			k.convert_char(c, p);
			break;
		case 2:
			k.convert_int(f,p);
			break;
		case 3:
			k.convert_float(f,p);
			break;
		case 4:
			k.convert_double(f,p);
			break;
		case 5:
			k.convert_inff(f, p);
			break;
	}
}