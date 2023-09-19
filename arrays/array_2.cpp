#include <iostream>
using namespace std;

int main()
{
    int scores[10];

    // Read Data , we get garbage values if we
    // have not inserted any elements in the array.
    cout << "score[0] : " << scores[0] << endl;
    cout << "score[1] : " << scores[1] << endl;

    for (size_t i{0}; i < 10; ++i)
    {
        scores[i] = i * 3;
    }

    for (size_t i{0}; i < 10; i++)
    {
        cout << scores[i] << endl;
    }
    return 0;
}