#include <iostream>
using namespace std;

#include "person.h"
#include "civileng.h"
#include "engineer.h"

int main()
{
    // Constructors will follow a bottom-up approach , starting with the base class.
    // Person p1; // Person

    // Engineer e1; // Engineer ==> Person

    /*
      This is a  derived object and the compiler is going to see all the classes
      that this is deriving from.
    */

    CivilEngineer ce1; // CivilEngineer ==> Engineer ==> Person

    cout << "Done" << endl;

    return 0;
}