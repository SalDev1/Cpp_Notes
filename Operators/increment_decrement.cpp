#include <iostream>
using namespace std;

int main()
{
    int number{5};

    number = number + 1; // Regular Increment
    // cout << number << endl;

    number = number - 1; // Regular Decrement
    // cout << number << endl;

    // Post increment/decrement
    // It prints the value first before performing the operation.
    int value = 5;
    cout << "The value is (incrementing) : " << value++ << endl;
    cout << "The value is " << value << endl;

    cout << "The value is (decrementing) : " << value-- << endl;
    cout << "The value is : " << value << endl;

    // Prefix Increment / Decrement
    // It does the operation first , before printing the value.
    cout << "The value is (incrementing) : " << ++value << endl;
    cout << "The value is " << value << endl;

    cout << "The value is (decrementing) : " << --value << endl;
    cout << "The value is : " << value << endl;
}