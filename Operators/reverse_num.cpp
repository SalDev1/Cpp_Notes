#include <iostream>
using namespace std;

int main()
{
    // Print out reverse sequence of the elements in the array.
    int size;
    cin >> size;
    int c[size];

    for (int i = 0; i < size; i++)
    {
        cin >> c[i];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << c[i] << " ";
    }
    return 0;
}