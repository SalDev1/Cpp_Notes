#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize the variables
    float number1{1.12345678901234567890f};       // 4 bytes
    double number2{1.12345678901234567890};       // 8 bytes
    long double number3{1.12345678901234567890L}; // 12 bytes

    cout << "size of the float : " << sizeof(number1) << endl;
    cout << "sizeof double : " << sizeof(number2) << endl;
    cout << "sizeof long double : " << sizeof(number3) << endl;

    // double == for using scientific notation

    // Floating Point Numbers Memory Representation
    // Single Precision (32-bit) (Signed Bit , Exponent Bias , Mantessia)
    // Double Precision (64-bit)

    // Put a suffix f for declaring a floating point number.

    // Control the precision from cout
    // Mainly counting the digits which are in the order , that where precision comes into play.
    cout << setprecision(20);

    cout << "number 1 : " << number1 << endl; // Precision = 7 digits
    cout << "number 2 : " << number2 << endl; // Precison = 15 digits
    cout << "number 3 : " << number3 << endl; // Precison = 15+ digits

    // Float problems : The precision is usually too limited
    // for a lot of ap(daubte)(192400023.0)
    double number4{192400023.0}; // Error : narrowing conversion
    cout << "number4 :" << number4 << endl;

    // e8 == 10 to the power 8
    double number5{1.92400023e8};
    double number6{1.924e8};

    cout << "number 5 :  " << number5 << endl;
    cout << "number 6 :   " << number6 << endl;
}