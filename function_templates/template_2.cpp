#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b);
// This function template can't handle multiple data types at the same time.
// Template parameter is something that you have in your function declaration or defintion.
// Template parameters ==>(T a , T b) are template parameters.

int main()
{
    int a{23};
    int b{12};

    double c{23.45};
    double d{67.98};

    // A real C++ function generated is called template instance.
    string e = "Hello";
    string f = "World";

    maximum(a, b); // int type deduced ==> int function instance will be generated.
    maximum(c, d); // double type deduced ==> double function instance will be generated.
    maximum(e, f); // string type deduced.

    auto max = maximum(a, b);

    /*
      To solve the problem where the single template function can use multiple data types at the same time,
      we make use of the concept called explicit template arguments.
    */

    // Explicit template arguments.
    // We will force the complier to use some certain data type to generate your template instance.
    maximum<double>(c, d);

    cout << maximum<double>(a, c) << endl; // Double template instance generated.
    // Now , the above statement will support multiple data types at the same time.
    // There is an implict conversion from int to double for the first parameter.

    // Can't convert a string to double.
    // maximum<double>(a, e);

    auto max_1 = maximum<double>(a, d);
    cout << "max : " << max_1 << endl;

    // There is an difference between template parameter and explicit template arguments.
    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}