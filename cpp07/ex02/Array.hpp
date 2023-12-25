#ifndef ARRAY_HPP
#define ARRAY_HPP


#include<exception>
#include <iostream>

template<typename T>
class Array{
    private:
        T *arr;
        unsigned int s_arr;
    public:
        Array() : arr(NULL), s_arr(0) {}

        Array(unsigned int n ){
            arr = new T[n];
            s_arr = n;
            unsigned int i = -1;
            while(++i < n)
                arr[i] = T();
        }
        Array(const Array &other) : s_arr(other.s_arr){
            arr = new T[s_arr];
            unsigned int i = -1;
            while(++i < s_arr)
                arr[i] = other.arr[i];
        }
        Array& operator=(const Array &other){
            if(this != &other){
                delete[] arr;
                s_arr = other.s_arr;
                arr = new T[s_arr];
                unsigned int i = -1;
                while(++i < s_arr)
                    arr[i] = other.arr[i];
            }
            return *this;
        }
        class OutOfLimitsException : public std::exception {
            public:
                const char *what() const throw() {
                    return "Out of bounds";
            }
        };
        T& operator[](unsigned int i){
            if(i >= s_arr)
                throw OutOfLimitsException();
            return arr[i];
        }
        unsigned int size()const{
            return this->s_arr;
        }
        ~Array(){
            delete[] arr;
        }
    
};


#endif