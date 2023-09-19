#include <iostream>
using namespace std;

int main()
{
    double a{10};
    double b{15};

    // In this we are making use of the capture lists in the lambda functions.
    auto func = [a, b]()
    {
        // These capture lists parameters can be used in the within local scope.
        cout << "a + b : " << a + b << endl;
    };

    func();

    // Capturing by value : what we have in the lambda function is a copy.
    int c{42};
    // Down Below , we are capturing value in the given lambda function.
    // The increment that we do in the for loop(c++) will not picking up by the lambda function.
    // Address will be different for inner and outer c.
    auto func1 = [c]()
    {
        cout << "Inner value : " << c << endl;
    };

    for (size_t i{}; i < 5; i++)
    {
        cout << "Outer value  : " << c << endl;
        func1();
        ++c;
    }

    return 0;
}