#include <iostream>
#include <string.h>
using namespace std;

// Passing template parameters as reference.
template <typename T> // Declaration
const T &maximum(const T &a, const T &b);
int main()
{
    double a{23.5};
    double b{51.2};

    cout << "Out - &a:" << &a << endl;
    double max1 = maximum(a, b);
    cout << "max1 : " << max1 << endl;

    return 0;
}

template <typename T> // Definition
const T &maximum(const T &a, const T &b)
{
    cout << "In -&a" << &a << endl;
    return a > b ? a : b;
}

// The address that we get from the terminal can be deduced by the floating point representation.
// Single Precision (32-bit) or Double Precision(64 bit)

// Remember to learn stl library(C++ Libraries.)
/*
   learn the basics of c++ like from this video and some good books then go for stl library in c++.
   STL is like the most important library for CP. After stl, start ds and algo like trees, graphs n all.
*/