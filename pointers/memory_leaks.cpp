#include <iostream>
using namespace std;

int main()
{
    // When we loose access to memory that is dynamically allocated.
    int *p_number{new int{67}};

    int number{55};
    p_number = &number;

    // Now p_number points to address2 , but address1 is still in use by
    // our program. But our program has lost access to that memory location.
    // Memory has been leaked.

    // If there is more memory leak , operating system will think you are taking
    // too much heap and will terminate the program

    cout << endl;
    // Double Allocation.
    int *p_number1{new int{55}};

    p_number1 = new int{44};

    delete p_number1;
    p_number1 = nullptr;

    cout << "Program ending well" << endl;

    return 0;
}