#include <iostream>
using namespace std;

int main()
{
    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int result = (a + ((b * c) - (d / e)) - f + g);
    int result2 = (((a / b) * c) + d - e + f);

    cout << "result : " << result << endl;
    cout << "result2 : " << result2 << endl;

    int result3 = (a + b) * c - d / e - f + g;
    cout << result3 << endl;

    // Precedence == which operation to do first.
    // Associativity == which direction or which order.
    // for + , - (Associativity  ==> left to right)
}