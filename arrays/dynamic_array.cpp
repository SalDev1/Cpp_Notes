#include <iostream>
using namespace std;

int main()
{
    // These dynamic arrays don't work on range-based for loops.
    double *ptr_array{};
    ptr_array = new double[5]{10, 20, 30, 40, 50};

    for (size_t i{0}; i < 5; ++i)
    {
        // Printing the values using regular array brackets or pointer arithemetic.
        cout << "value : " << ptr_array[i] << " : " << *(ptr_array + i) << endl;
    }

    // Another way of using dynamic arrays.
    double *ptr_scores{new double[10]};

    // Releasing the array.
    delete[] ptr_array;
    ptr_array = nullptr;

    delete[] ptr_scores;
    ptr_scores = nullptr;

    // Static Arrays.
    int scores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    cout << endl;
    cout << "All the scores will be down here : " << endl;
    for (auto score : scores)
    {
        cout << score << endl;
    }

    return 0;
}