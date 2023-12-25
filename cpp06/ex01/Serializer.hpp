#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include "Data.hpp"
class Serializer
{
	private:
		Serializer();
	public:
		Serializer( Serializer const &);
		Serializer &operator=( Serializer const &);
		~Serializer();
		static uintptr_t serialize(Data* );
		static Data* deserialize(uintptr_t );
};

#endif