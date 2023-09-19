#include <iostream>
using namespace std;

int main()
{
    // int scores[10] = {10, 12, 33, 43, 59, 16, 57, 48, 79, 100};
    double scores[]{12.7, 7.5, 13.2, 8.1, 9.3};
    int length = sizeof(scores) / sizeof(scores[0]);
    // Array can be declared using static and dynamic method
    // The disadvantage of using static arrays is ==> fixed size.
    // Take care of array bounds.
    cout << endl;
    cout << "Reading out the score values (manually) : " << endl;
    cout << "score[0] : " << scores[0] << endl;
    cout << "score[1] : " << scores[1] << endl;
    // ..
    cout << "score[9] : " << scores[9] << endl;

    cout << endl;

    for (size_t i{0}; i < length; ++i)
    {
        cout << "score"
             << "[" << i << "] : " << scores[i] << endl;
    }

    return 0;
}