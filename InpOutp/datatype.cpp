#include <iostream>
using namespace std;

/*
   int , double , float , char , bool , void , auto
   There is bunch of 0s and 1s in the computer's ram

   Treat each bit as a self-contained piece of data.

   Converting numbers into 0s and 1s using number systems.
   Binary (Base 2)
   Octal  (Base 8)
   Hexadecimal (Base 16)


   If you have n digits
   n --> 0-2^(n- 1)

   Adding more bits to meet the specific number system is called padding.
*/

int main()
{
    string name = "Salman";
    cout << name << endl;
    // Number systems.
    int number = 15;     // Decimal
    number = 017;        // Octal
    number = 0x0f;       // Hexadecimal
    number = 0b00001111; // Binary

    cout << "Hello World !" << endl;
    cout << "Number 1 is : " << number << endl;
    cout << "Number 2 is : " << number << endl;
    cout << "Number 3 is : " << number << endl;
    cout << "Number 4 is : " << number << endl;

    // Function variable initialization ==> {} or ()
    // Braced Initialization {}
    // Functional Initialization ()
    // Assignment Initialization

    int apple_count(15);
    int mango_count(10);

    // Braced Initializition
    int dog_count{10};
    int cat_count{15};

    int total_fruit_count(apple_count + mango_count);

    cout << sizeof(int) << endl;
    cout << sizeof(number) << endl;
}