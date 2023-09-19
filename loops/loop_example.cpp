#include <iostream>
using namespace std;

int main()
{
    // Iterator declared outside the loop
    size_t i{0}; // Iterator defined outside.

    for (size_t i{0}; i < 10; i++)
    {
        cout << i << " : I love C++" << endl;
    }

    cout << "sizeof(size_t) : " << sizeof(size_t) << endl;
    cout << "i : " << i << endl;

    // Don't hard code values : BAD!
    const size_t count_size{100};

    for (size_t i{0}; i < count_size; i++)
    {
        cout << i << " : I love C++" << endl;
    }
    cout << "Loop done! " << endl;

    return 0;
}