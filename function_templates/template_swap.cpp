#include <iostream>
using namespace std;

template <typename T>
T swap_nums(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // Template type parameters by reference.
    int a{20};
    int b{10};

    cout << "The values before swapping were : " << a << "," << b << endl;
    swap_nums(a, b);
    cout << "The values after swapping are : " << a << "," << b << endl;

    return 0;
}
