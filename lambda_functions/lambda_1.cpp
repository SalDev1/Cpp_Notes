#include <iostream>
using namespace std;

// Lambda function.
auto func = []()
{
    cout << "Hello World!" << endl;
};

auto func1 = []()
{
    cout << "I am Salman" << endl;
};

auto func2 = [](double a, double b) -> double
{
    return a + b;
};
// If you call a return keyword , you will get nothing as these are void lambda functions.
auto add_numbers = [](int a, int b)
{
    cout << a + b << endl;
};

// The whole thing after = is called lambda expression..
int main()
{
    // I think it should be similar to lambda function we saw in python.
    /*
       A mechanism to set up anonymous functions (without names). Once we
      have them set up, we can either give them names and call them , or
      we can even get them to do things directly.

    //   Declaring and using lamba functions.

    Lambda function signature
                         [capture list] (parameters) ->return type{
                                // Function body
    std::cout < "Hello World!" <« std::endl; };
    */

    // capture list -> parameters -> return type;
    func();
    func();

    func1();
    func1();

    auto result_1 = func2(23.45, 76.98);
    auto result_3 = func2(34.89, 98.76);

    cout << result_1 << endl;
    cout << result_3 << endl;

    // Lambda function that returns something.

    auto result = [](double a, double b)
    {
        return a + b;
    }(10, 20);

    cout << endl;
    cout << result << endl;
    return 0;
}