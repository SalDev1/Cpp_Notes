#include <iostream>
using namespace std;

int main()
{
    // Booleans == they take eight bytes in the memory.
    bool red_light{true};
    bool green_light{false};
    // We can make decisions based on booleans in our program.
    // It takes 1 byte in the memory.

    if (red_light == true)
    {
        cout << "Go !!" << endl;
    }
    else
    {
        cout << "Stop Now !!" << endl;
    }

    if (green_light)
    {
        cout << "The light is green! " << endl;
    }
    else
    {
        cout << "The light is NOT green !" << endl;
    }

    cout << sizeof(bool) << endl;
    // 1 - true
    // 0 - false

    cout << "Red_light : " << red_light << endl;
    cout << "Green_light : " << green_light << endl;

    cout << boolalpha; // gives true and false values
    cout << "Red_light : " << red_light << endl;
    cout << "Green_light : " << green_light << endl;
}