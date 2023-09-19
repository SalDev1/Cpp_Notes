#include <iostream>
using namespace std;

int main()
{
    // Declaring and Initializing at the same time and making using of Heap.
    int *p_number5{new int{10}};
    int *p_number6{new int{22}};
    int *p_number7{new int{23}};

    cout << p_number5 << endl;
    cout << *p_number5 << endl;

    cout << endl;
    cout << p_number6 << endl;
    cout << *p_number6 << endl;

    cout << endl;
    cout << p_number7 << endl;
    cout << *p_number7 << endl;

    delete p_number5;
    p_number5 = NULL;

    delete p_number6;
    p_number6 = NULL;

    delete p_number7;
    p_number7 = NULL;

    // Reuse the pointer again.
    cout << endl;
    p_number5 = new int(81);
    cout << "p_number5 : " << *p_number5 << endl;

    delete p_number5;
    p_number5 = nullptr;
    return 0;
}