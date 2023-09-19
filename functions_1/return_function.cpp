#include <iostream>
using namespace std;

// Return by value
int sum(int a, int b)
{
    int result = a + b;
    cout << "In : &result(int) : " << &result << endl;
    return result;
}

// Concentating two strings.
// Return by value (Exception)
// Optimize return by value to return by reference(Below Function).
string add_strings(string name1, string name2)
{
    string result = name1 + " " + name2;
    cout << "In : &result(string) : " << &result << endl;
    return result;
}

int main()
{
    int a{12};
    int b{20};

    int result = sum(a, b);
    // It returns an different address to the one we have assigned to.
    cout << "Out : &result(int) : " << &result << endl;
    cout << "sum : " << result << endl;

    string name1 = "Salman";
    string name2 = "Uddin";

    cout << endl;
    string str_result = add_strings(name1, name2);
    cout << "Out : &result(string) : " << &str_result << endl;
    cout << "str_result : " << str_result << endl;

    return 0;
}