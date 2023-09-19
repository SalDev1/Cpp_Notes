#include <iostream>
using namespace std;

int main()
{
    // Know about ASCII encoding.
    char characters{'a'};
    cout << characters << endl;

    // Getting characters based on their ASCII code.
    char value = 73;
    cout << "value : " << value << endl;
    // Turning the char value into integer by performing static_cast.
    cout << "value(int) : " << static_cast<int>(value) << endl;

    // One byte in memory : 2^8 = 256 differnet values(0-255)
    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    cout << character1 << endl;
    cout << character2 << endl;
    cout << character3 << endl;
    cout << character4 << endl;
    cout << character5 << endl;
}