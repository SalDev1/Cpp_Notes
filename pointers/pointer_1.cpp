#include <iostream>
using namespace std;

int main()
{

    int int_var{43};
    /* We will be storing the address of the variable and the pointer will be
     pointing towards it.*/
    int *p_int{&int_var};

    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    cout << "Int var : " << int_var << endl;
    cout << "p_int (Address in memory) : " << p_int << endl;

    // Pointers to different variables are of the same size.
    cout << endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(double*) : " << sizeof(double *) << endl;
    cout << "sizeof(int*) : " << sizeof(int *) << endl;
    cout << "sizeof(p_number1) : " << sizeof(p_number1) << endl;
    cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << endl;

    // Changing the address of the pointer as well.
    cout << endl;
    int var1{65};
    p_int = &var1;
    cout << "pint (with different address) : " << p_int << endl;

    // Can't cross assign between pointers of different types.
    int *ptr_1{nullptr};
    double double_var{33};
    // ptr_1 = &double_var; // Compile Error

    return 0;
}