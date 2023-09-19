#include <iostream>
using namespace std;

int main()
{
    // While and for-loop == reached the same goal but have different implementations.
    const unsigned int COUNT{10};
    unsigned int i{0};
    while (i < COUNT)
    {
        cout << "I will succeed whatever it takes." << endl;
        ++i;
    }
    cout << endl;
    size_t j{0};
    while (j < COUNT)
    {
        cout << j << " : I am a beast." << endl;
        j++;
    }
    cout << "Loop Done" << endl;
}