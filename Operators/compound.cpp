#include <iostream>
using namespace std;

int main()
{
    /*
      We have += , -= , /= *= and many more.
    */
    int value{45};

    cout << "The value is : " << value << endl;

    cout << endl;
    value += 5;
    cout << "The value is (after +=5)" << value << endl;

    cout << endl;
    value -= 5;
    cout << "The value is (after -5)" << value << endl;

    cout << endl;
    value *= 5;
    cout << "The value is (after *= 5)" << value << endl;

    cout << endl;
    value = 11;
    cout << "The value is (after %= 11)" << value << endl;
}