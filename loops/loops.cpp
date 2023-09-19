#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "I love C++" << endl;
    }
    // unsigned int i {} == int i = 0;
    for (unsigned int i{0}; i < 10; ++i)
    {
        cout << i << endl;
    }

    for (int i = 0; i < 10; i++)
        cout << "i : " << i << " , Double that and you get " << 2 * i << endl;
    // For loop ==> will be scope inside the body of the iterator.
    cout << "Loop Done" << endl;

    // Use size_t : a representation of some unsigned int for positive numbers.
}