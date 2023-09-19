#include <iostream>
#include "cylinder.h"
#include "constants.h"
using namespace std;

int main()
{
    // Pointer call operator.
    // Calling object's classes using pointers.
    // Heap Object , you can call objects using allocating a pointer to it while creating a new object.
    /*
      It will use the dynamic heap memory and will store our cylinder object over there.
    */
    Cylinder *c1 = new Cylinder(11, 20);
    // You remember arrow notation , I know it used it many times.
    // While creating a new node in the linked list.
    cout << "volume : " << c1->volume() << endl; // arrow notation.
    cout << "bse_radius : " << c1->get_base_radius() << endl;
    cout << "height : " << c1->get_height() << endl;

    Cylinder c2;
    // Managing a stack object through pointers.
    Cylinder *p_cylinder1 = &c2;

    cout << endl;
    cout << p_cylinder1->volume() << endl;

    // Whenever you are using pointer, make sure to release it after making use of it.
    delete c1;

    return 0;
}