#include <iostream>
using namespace std;

int main()
{
    // Ternary Operator ==> An alternative to the if-else statement.
    int num_1{40};
    int num_2{30};

    cout << endl;
    num_1 < num_2 ? (cout << num_1 << " is less than " << num_2 << endl) : (cout << num_1 << " is not less than " << num_2 << endl);

    cout << endl;
    cout << "speed" << endl;
    bool fast = false;

    int speed{fast ? 300 : 150};
    cout << "The speed is : " << speed << endl;

    cout << endl;
    int max{};
    max = (num_1 > num_2) ? num_1 : num_2;
    cout << "The maximum no is : " << max << endl;
}