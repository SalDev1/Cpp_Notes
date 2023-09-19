#include <iostream>
using namespace std;

int main()
{
    /*
      A pointer that doesn't point to valid memory address. Trying to
      dereference and use a dangling pointer will result in undefined behavior
    */

    // Three types of cases with dangling pointers.
    // Uninitialized Pointer
    // Deleted Pointer
    // Multiple pointers pointing to same memory.

    // Solutions
    // Initialize your pointers
    // Reset your pointers after delete.
    // For multiple pointers to same address , make
    // sure the owner pointer is very clear.

    // Solution 1
    cout << endl;
    cout << "Solution : " << endl;
    int *p_number5{nullptr};
    int *p_number6{new int{23}};

    // Check for null pointer use.
    if (p_number6 != nullptr)
    {
        cout << "p_number6 : " << p_number6 << endl;
    }
    else
    {
        cout << "Invalid Address : " << endl;
    }

    // Solution 3
    cout << endl;
    cout << "Solution 3 : " << endl;
    int *p_number8{new int{382}};
    int *p_number9{p_number8};

    cout << "p_number8 - " << p_number8 << "-" << p_number8 << endl;

    if (!(p_number8 == nullptr))
    {
        cout << "p_number" << p_number9 << "-" << p_number9 << endl;
    }
    else
    {
        cerr << "WARNING : Trying to use an invalid pointer" << endl;
    }

    return 0;
}