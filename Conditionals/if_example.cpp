#include <iostream>
using namespace std;

int main()
{
    int number1{45};
    int number2{60};

    bool result = (number1 < number2); // Expression yielding the condition.
    cout << boolalpha << "result: " << result << endl;

    cout << endl;
    cout << "Free standing if statement" << endl;

    if (result == true)
    {
        cout << number1 << " is less than " << number2 << endl;
    }

    else
    {
        cout << number1 << " is not less than " << number2 << endl;
    }
}