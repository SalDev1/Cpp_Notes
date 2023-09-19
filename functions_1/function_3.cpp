#include <iostream>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    cout << "Maximum of two numbers : " << max(9, 20) << endl;
    cout << "Minimum of two numbers : " << min(2, 1) << endl;

    return 0;
}