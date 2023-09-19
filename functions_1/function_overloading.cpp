#include <iostream>
using namespace std;

// You are overloading the same function.
// When you call the max function , the complier will select the most fitting overloading function.
int max(int a, int b);
double max(double a, double b);
string max(string &a, const std::string &b);

int main()
{
    int int_value1{41};
    int int_value2{29};

    double double_value1{47.2};
    double double_value2{55.01};

    string first_str{"Hello"};
    string second_str{"World"};

    // When you call the max function , the complier will select the most fitting overloading function
    // cout << max(int_value1, int_value2) << endl;
    // cout << max(5, 7) << endl;
    // cout << max(double_value1, double_value2) << endl;
    // cout << max("dog", "cat") << endl;
    // cout << max(1, 2) << endl;

    auto result = max(double_value1, double_value2);

    return 0;
}

int max(int a, int b)
{
    cout << "int overload called" << endl;
    return a > b ? a : b;
}

double max(double a, double b)
{
    cout << "double overload called" << endl;
    return a > b ? a : b;
}

string max(string a, string b)
{
    cout << "String overload called" << endl;
    return (a > b) ? a : b;
}
