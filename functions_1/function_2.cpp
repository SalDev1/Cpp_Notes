#include <iostream>
// #include <cmath>
using namespace std;

double increment_multiply(double a, double b)
{
    cout << "Inside function , before increment : " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    double result = ((++a) * (++b));

    cout << "Inside function , after increment : " << endl;
    cout << "a :" << a << endl;
    cout << "b : " << b << endl;

    return result;
}

int main()
{
    int a_value{41};
    int b_value{123};

    int maximum_number{max(a_value, b_value)};

    cout << maximum_number << endl;

    cout << increment_multiply(23.45, 67.98) << endl;
    return 0;
}