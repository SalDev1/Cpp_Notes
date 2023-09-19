#include <iostream>
using namespace std;

#include "person.h"
#include "civileng.h"
#include "engineer.h"

int main()
{
    Engineer e1;

    CivilEngineer ce1;

    cout << "Done" << endl;

    return 0;
}

// We also get to know how to resurrect members
// back in scope.

/*
 We want some members to be accessible to other
 downstream classes.

 Always provide a default constructor for your classes, especially if
 they will be part of an inheritance hierarchy
*/