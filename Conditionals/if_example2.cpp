#include <iostream>
using namespace std;

int main()
{

    bool red = false;
    bool green{true};
    bool yellow{false};
    bool police_stop{true};

    cout << endl;
    cout << "Police officer stops(verbose)" << endl;
    if (green)
    {
        if (police_stop)
        {
            cout << "Stop" << endl;
        }
        else
        {
            cout << "Go" << endl;
        }
    }
}