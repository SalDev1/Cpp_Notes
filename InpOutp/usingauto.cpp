#include <typeinfo>
#include <iostream>
using namespace std;

int main()
{
    // auto == let the complier deduce the data type.
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var7{'c'}; // It uses 1 byte.

    // Modifiers suffixes
    auto var4{123u};  // unsigned
    auto var5{123ul}; // unsigned long
    auto var6{123ll}; // long long

    // To check the data type of the given variable.
    // cout << typeid(var7).name() << endl;
}