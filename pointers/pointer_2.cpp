#include <iostream>
using namespace std;

int main()
{
    // Deferencing a pointer.

    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    cout << "value : " << *p_int2 << endl; // Deferencing a pointer.
    cout << p_int2 << endl;
    return 0;
}