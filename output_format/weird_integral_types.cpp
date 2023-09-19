#include <iostream>
using namespace std;

int main()
{
    /*
       Integral types less than 4 bytes in size
       don't support arithmetic operations.
       It should be minimum 4 bytes to conduct arithmetic operations.
    */

    short int var1{10};
    short int var2{20};

    char var3{40};
    char var4{50};

    cout << "size of var1 : " << sizeof(var1) << endl;
    cout << "size of var2 : " << sizeof(var2) << endl;
    cout << "size of var3 : " << sizeof(var3) << endl;
    cout << "size of var4 : " << sizeof(var4) << endl;

    auto result1 = var1 + var2; // Conversion to int.
    auto result2 = var3 + var4; // Cause the int is the smallest type which we can support these arithmetic operations.

    cout << "size of result1: " << sizeof(result1) << endl; // 4
    cout << "size of result2: " << sizeof(result2) << endl; // 4
}