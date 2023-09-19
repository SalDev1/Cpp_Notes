#include <iostream>
using namespace std;

int main()
{
    // Array size of sizeof
    int scores[]{10, 12, 34, 56, 78, 54};
    int arr_length{sizeof(scores) / sizeof(scores[0])};

    cout << "Size of the array: " << arr_length << endl;

    // If you want info about values and indexes.
    cout << endl;
    for (size_t i{0}; i < arr_length; i++)
    {
        cout << scores[i] << endl;
    }

    // Using plain old range based for loop
    int goals[]{10, 12, 32, 15, 56, 76, 79, 23};
    // C++ technique for showing elements in the array.
    cout << endl;

    // Range based for loop
    // If you only need the values , use this.
    for (auto goal : goals)
    {
        cout << "goal : " << goal << endl;
    }
    for (auto i : scores)
    {
        cout << "score : " << i << endl;
    }

    return 0;
}