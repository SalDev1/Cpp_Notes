#include <iostream>
using namespace std;

int main()
{
    // Capturing everything by value.
    // Capture all by reference = "&"
    // Capture all by value = "="

    int value{45};
    auto func = [=]()
    {
        cout << "Inner value : " << value << endl;
    };

    for (size_t i{0}; i < 5; i++)
    {
        cout << "Outer value : " << value << endl;
        func();
        ++value;
    }

    return 0;
}