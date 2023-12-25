#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
#include <cctype>
#include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		ScalarConverter( ScalarConverter const &  );
		ScalarConverter &operator=( ScalarConverter const &);
		~ScalarConverter();
		static void convert(std::string);
		static int get_type(std::string);
		static void print_char(char, int);
		static void print_int(double);
		static void print_float(float, int);
		static void print_double(double, int);
		static void convert_char(char, int);
		static void convert_int(double, int);
		static void convert_float(double, int);
		static void convert_inff(double , int);
		static void convert_double(double, int);
		static int precision(std::string);
};

#endif