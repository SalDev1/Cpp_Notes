#include <iostream>
using namespace std;

int addTwoNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int multiplyTwoNumbers(int a, int b)
{
    int result = a * b;
    return result;
}

int main()
{
    int sum = addTwoNumbers(3, 4);
    cout << "Sum of the two numbers is:  " << sum << endl;

    int result = multiplyTwoNumbers(23, 56);
    cout << "Multiplication of the two numbers is:  " << result << endl;
}