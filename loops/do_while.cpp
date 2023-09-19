#include <iostream>
using namespace std;

int main()
{
    const size_t COUNT{10};
    unsigned int i{0};

    // Do-while :- it executes the main code once , then starts checking the condition.
    do
    {
        cout << "[" << i << ']' << "I am a Beast." << endl;
        i++;             // INCREMENT
    } while (i < COUNT); // Test
}