#include <iostream>
using namespace std;

int main()
{
    int *ptr_number{nullptr};
    char *ptr_2{nullptr};
    // Dynamically allocating space for a single int on the heap.
    // new keyboard allows us to allocate memory in the heap.
    ptr_number = new int;
    ptr_2 = new char;

    *ptr_number = 45;
    *ptr_2 = 'A';

    cout << endl;
    cout << "Dynamic Allocating Memory : " << endl;
    cout << "ptr_number : " << *ptr_number << endl;
    cout << "ptr_2 : " << *ptr_2 << endl;

    // Remember to release the memory and reset your pointer after you have deleted it.
    // Other people have a chance to check and see that's
    // validity memory before they use it that's the use of resetting your memory.

    delete ptr_number;
    ptr_number = NULL;

    delete ptr_2;
    ptr_2 = NULL;

    return 0;
}