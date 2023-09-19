#include <iostream>
using namespace std;

#include "dervied.h"

int main()
{
    // The compiler is going to called the most specific virtual function.
    // Base ptr : Uses polymorphism
    Base *base_ptr1 = new Derived;
    double result = base_ptr1->add();
    cout << "Result (base ptr) : " << result << endl; // 12

    cout << "----------------" << endl;

    // Base ref : Uses polymorphism
    Derived derived1;
    Base &base_ref1 = derived1;
    result = base_ref1.add();
    cout << "Result (base ref) : " << result << endl; // 12

    cout << "-------------------" << endl;

    // Raw objects
    // This will be doing static binding.
    Base base3;
    result = base3.add();
    cout << "raw result : " << result << endl;

    // Direct object : Uses static binding
    cout << endl;
    Derived derived2;
    result = derived2.add();
    cout << "Result (Direct object) " << result << endl; // 22

    cout << "------------------------" << endl;

    Base base1 = derived2;
    result = base1.add();
    cout << "Result (Raw Objects assignment) : " << result << endl; // 11

    return 0;
}

// Default arguments are handled at compile time
// Virtual functions are called at run time with polymorphism
// If you use default arguments with virtual functions, you might get weird
// results with polymorphism.

// The default arguments are going to be plugged in at compile time using static binding
// The base pointer is the base object we will be using the default arguments from the
// base implementation.

// The complier is going to decide which default parameters to plug in at compile time using static binding.

// They're best avoided.