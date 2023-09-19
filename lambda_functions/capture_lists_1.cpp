#include <iostream>
using namespace std;

int main()
{
    int value{23};
    // Capturing by reference : Working on the original outside value.
    auto func = [&value]()
    {
        cout << "Inner value : " << value << " &inner : " << &value << endl;
    };
    /*
       Changes that we do inside the loop will be acknowledged by the lambda function.
       as we are making use of the call by reference concept.
       Address will be same for both the inner and outer value.
    */
    for (size_t i{0}; i < 5; i++)
    {
        cout << "Outer value : " << value << " &outer : " << &value << endl;
        func();
        ++value;
    }

    return 0;
}