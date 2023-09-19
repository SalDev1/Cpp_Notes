#include <iostream>
using namespace std;

int main()
{
    // Omit the size of the array at declaration.
    int class_sizes[]{10, 12, 15, 11, 18, 17, 23};

    // Will print this with a range based for loop.
    for (auto value : class_sizes)
    {
        cout << "value : " << value << endl;
    }

    const int birds[]{10, 12, 15, 11, 18, 17, 23, 56};

    // Sum up scores array , store result in sum;
    int scores[]{2, 5, 8, 2, 5, 6, 9};
    int sum{0};

    for (int element : scores)
    {
        sum += element;
    }

    cout << "Score sum : " << sum << endl;

    return 0;
}