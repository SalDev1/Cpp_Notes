#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Initialize with string literal.
    // ISO C++ forbids converting a string constant to 'char*'
    const char *p_message{"Hello world!"};
    // String will be converted into the array of const characters.
    /* The string literal is made up const char .Trying to modify any of them will result in a disaster.*/
    cout << p_message << endl;
    cout << *p_message << endl; // Deferencing the pointer.
    // In most cases you want to store the string and print it out.
    // Solution ==> declaring a const char data type.

    // Allow users to modify the string.
    cout << endl;
    char message1[]{"Hello World"};
    message1[0] = 'B';
    cout << "message1 : " << message1 << endl;

    return 0;
}