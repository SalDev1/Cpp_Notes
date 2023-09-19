#include <iostream>
using namespace std;

int main()
{
    // Assignments.

    int var1{123}; // Declare and Initialize
    cout << "var1 : " << var1 << endl;

    var1 = 55; // Assign
    cout << "var1 : " << var1 << endl;

    cout << endl;
    // Pay attention to auto type deduction
    // Auto is not useful for storing negative numbers.
    return 0;

    // We have seen all the nuances of how different data types work.
}