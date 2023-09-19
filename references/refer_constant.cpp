#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "Const references : " << endl;
    int age = 30;
    const int &rf_age{age};
    cout << age << endl;
    cout << rf_age << endl;

    cout << endl;
    cout << "Pointers : " << endl;
    const int *const ptr_age{&age}; // Only for pointers , not for references.
    cout << *ptr_age << endl;

    cout << endl;

    // Second Part
    cout << "Original Reference" << endl;
    int age_1{34};
    int &rf_age_1{age_1};

    cout << age_1 << endl;
    cout << rf_age_1 << endl;

    cout << "Modify through reference" << endl;
    rf_age_1++;

    cout << age_1 << endl;
    cout << rf_age_1 << endl;
    return 0;
}