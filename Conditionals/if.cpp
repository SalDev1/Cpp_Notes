#include <iostream>
using namespace std;

int main()
{
    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    if (red)
    {
        cout << "Stop" << endl;
    }
    if (yellow)
    {
        cout << "Slow Down" << endl;
    }
    if (green)
    {
        cout << "Go" << endl;
    }
}