#include <functional>
#include <algorithm> // This is an important library , keep this in mind.
#include <iostream>
using namespace std;

// Always make notes of everything you learn and refer them in the future.

int main()
{
    // Function Objects (Functors) : Function wrapped in a class so that it is
    // available like an object.

    int arr[] = {1, 34, 4, 12, 6, 16};
    int asize = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + asize);                 // So this takes two parameters and sort the whole array is ascending order.
    sort(arr, arr + asize, greater<int>()); // Sorting in ascending order.
    // greater<int>() ==> Functor or Function Object.
    for (int i = 0; i < asize; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// https://www.cplusplus.com/reference/algorithm/