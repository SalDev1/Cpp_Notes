#include <iostream>
using namespace std;

int main()
{
    // When 'new' fails
    // When it fails to allocate a dynamic memory
    // from the heap.

    int *number_1{new int[10000000]};
    /*
       Use a huge loop to try and exhaust the memory capabilities
       of your system. When new fails, your program is going to
       forcefuly terminate.
    */
    for (size_t i{}; i < 10000000; i++)
    {
        int *lots_of_ints2{new int[10000000]};
    }
    // Through the exception mechanism
    // The std::nothrow setting.

    cout << endl;
    for (size_t i{}; i < 100000000; i++)
    {
        try
        {
            int *lots_of_ints3{new int[10000000]};
        }
        catch (exception &ex)
        {
            cout << "Caught expection ourselves : " << ex.what() << endl;
        }
    }

    // nothrow option
    for (size_t i{}; i < 10000000; i++)
    {
        int *lots_of_ints4{new (nothrow) int[10000000]};

        if (lots_of_ints4 == nullptr)
        {
            cout << "Memory Allocation Failed" << endl;
        }
        else
        {
            cout << "Memory Allocation Succeeded" << endl;
        }
    }

    return 0;
}