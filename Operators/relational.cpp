#include <iostream>
using namespace std;

int main()
{
    // Relational Operator
    // For checking relations between
    // two variables and give results in form of true/false.
    int number_1 = 13;
    int number_2 = 45;

    cout << boolalpha; // Convert 0/1 into false/true.
    cout << (number_1 > number_2) << endl;
    cout << (number_1 >= number_2) << endl;
    cout << (number_1 <= number_2) << endl;
    cout << (number_1 < number_2) << endl;
    cout << (number_1 == number_2) << endl;
    cout << (number_1 != number_2) << endl;
}