#include <iostream>
using namespace std;

int main()
{
    // Making sure you are working with pointers containing valid memory addresses.
    int *ptr_number{new int{26}};

    if (!(ptr_number == NULL))
    {
        cout << "p_number points a VALID Address : " << ptr_number << endl;
        cout << "ptr_number : " << *ptr_number << endl;
    }
    else
    {
        cout << "p_number points to a INVALID Address" << endl;
    }
    // Remember to delete after every use.
    delete ptr_number;
    ptr_number = nullptr;

    // It's okay to delete a null pointer here.
    cout << endl;
    int *ptr_number1{};

    delete ptr_number;

    return 0;
}