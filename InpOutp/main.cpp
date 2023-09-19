#include <iostream>
using namespace std;

// std::count Printing data to the console
// std::cin Reading data from the terminal
// std::cerr Printing errors to the console
// std::clog Printing log messages to the console.

int main()
{
    int number = 123;
    cout << "The number is : " << number << endl;

    cerr << "Something went wrong" << endl;
    clog << "Show log message" << endl;
}