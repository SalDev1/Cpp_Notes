#include <iostream>
using namespace std;

int main()
{
    // Read beyond bounds : will read garbage or crash your program.
    // You can only perform manuiplication within the 10 elements of the array.
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "numbers[12] : " << numbers[12] << endl; // You will be getting a garbage value.

    cout << endl;
    for (auto i : numbers)
    {
        cout << i << endl;
    }

    // Objective :- Don't go overbound.

    return 0;
}