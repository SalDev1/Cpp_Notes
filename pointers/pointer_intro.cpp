#include <iostream>
using namespace std;

int main()
{
    int *p_number{};
    /* can only store an address of a variable of type int*/
    double *p_fractional_number{};
    /*
       can store an address of a variable of type double.
    */

    // These pointers are not pointing anywhere.
    // All pointer variables have the same size (as they are storing address)
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    cout << "Size of number pointer : " << sizeof(p_number1) << " , size of int : " << sizeof(int) << endl;
    cout << "size of fractional_number pointer : " << sizeof(p_fractional_number) << " , size of double : " << sizeof(double) << endl;

    return 0;
}