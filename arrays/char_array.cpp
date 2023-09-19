#include <iostream>
using namespace std;

int main()
{
    // Array with characters of the alphabet.
    // Null Termination = \0 , if not added may lead to showing of garbage values.
    char message[6]{'H', 'e', 'l', 'l', 'o', '\0'};

    // Using range based loop.
    for (auto c : message)
    {
        cout << c;
    }

    cout << endl;
    cout << "size : " << sizeof(message) << endl;

    // Direct printout
    cout << endl;
    cout << "message : " << message << endl;

    cout << endl;
    cout << "Modify array data : " << endl;
    message[1] = 'a';

    cout << "message : ";
    for (auto c : message)
    {
        cout << c;
    }
}