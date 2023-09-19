#include "dog.h"
#include "animal.h"
#include "feline.h"

#include <iostream>
using namespace std;

int main()
{
    // Destructors are called in the reverse order.

    // Problem is going to occur when we are using the base pointer to handle or manage derived objects.
    /*
      So we are trying to solve this using polymorphism , by using the virtual keyword in the destructors.

      The compiler will know that if you are using the base pointer to manage a derived object ,
      the complier will call the most specific destructor from the specific class..
    */
    // Animal *animal1 = new Dog("dark yellow", "dog1");
    // delete animal1;

    Animal *p_animal = new Dog; // Only destructor of animal is called.
    delete p_animal;

    // Construtors Flow => Animal ==> Feline ==> Dog;
    // Destructors Flow ==> Dog ==> Feline ==> Animal;
    // Now using the virtual keywords , the compiler will resolve the calls polymorphically.

    return 0;
}