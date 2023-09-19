#include <iostream>
#include "Person.h"
#include "Engineer.h"
#include "Civileng.h"

using namespace std;

int main()
{
    // Destructors ==> Up to Bottom
    // Person p1;
    // cout << p1 << endl;

    // Engineer e1;
    // cout << e1 << endl;

    CivilEngineer ce1;
    cout << ce1 << endl;

    // Constructors ==> bottom to top
    // Destructors ==> top to bottom

    return 0;
}
