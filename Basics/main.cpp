#include <iostream>
// You have to use the third party party , otherwise the complier will not understand what cout means
using namespace std;

// Main is the starting point of your main program
// And the program is executed in a sequential order
int main()
{
    int number = 10;
    cout << number << endl;
    cout << "Hello World" << endl;

    cout << "Number 2";
    cout << "Number 1" << endl;

    // It sends the message to the operating system whether the program has executed successfully or not.
    return 0;
}