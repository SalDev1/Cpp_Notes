#include <iostream>
using namespace std;

int main()
{
    bool a{true};
    bool b{false};
    bool c{true};

    cout << boolalpha;
    cout << "a :" << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    cout << endl;
    cout << "Basic AND Operations." << endl;
    cout << (a && b) << endl;
    cout << (a && c) << endl;
    cout << (a && b && c) << endl;

    cout << endl;
    cout << "Basic OR Operations." << endl;
    cout << (a || b) << endl;
    cout << (a || c) << endl;
    cout << (a || b || c) << endl;

    cout << endl;
    cout << "Basic NOT Operations." << endl;
    cout << (!a) << endl;
    cout << (!b) << endl;
    cout << (!c) << endl;
}