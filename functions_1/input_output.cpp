#include <iostream>
using namespace std;

void max_str(string &input1, string &input2, string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_int(int input1, int input2, int &output)
{
    // Changes that we do inside the function are visible to outside as well.
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

int main()
{
    string out_str;
    string string1("Cassablanca");
    string string2("Bellevue");

    // It shows the result based on the maximum length of the string or following lexographical order.
    max_str(string1, string2, out_str);
    cout << "max_str : " << out_str << endl;

    cout << endl;

    int x{100};
    int y{30};
    int output{};

    max_int(x, y, output);
    cout << "max_int : " << output << endl;

    double a{123.45};
    double b{45.00};
    double result{};

    // As it is a pointer , we need to pass the parameter as an address.
    max_double(a, b, &result);
    cout << "max_double : " << result << endl;

    return 0;
}

/*
Output parameters should be passed in such a way that you can
modify the arguments from inside the function. Options are passing
by reference or by pointer. References are preferred in C++


Input parameters shouldn't be modifiable from inside a function.
The function really need to get input (read) from the arguments.
You enforce modification restrictions with the const keyword.
Options are passing by const reference, passing by pointer to
 const, or even passing by const pointer to const
*/
