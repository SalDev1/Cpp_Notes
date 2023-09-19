#include "dog.h"
#include "cat.h"
#include "pigeon.h"
#include "animal.h"
#include "crow.h"
#include "feline.h"

#include <iostream>
using namespace std;

// cannot derive from 'final' base 'Plane' in derived type 'FighterJet' class Plane final
// {
//     Plane() = default;
// };

// class FighterJet : public Plane
// {
// };

int main()
{
    // Restrictes how you override methods in derived classes
    // Restruct how you can derive from a base class.

    // Mostly used the final keyword ==>  classes or methods.

    // Sometimes we get the case of useless virtual methods where in one hand we are saying or using the final keyword in the class
    //  and other hand we are setting up a method to be used or specialized in derived classes.
    // We have conflicting ideas.

    // Can override in a final class. Makes sense!

    // This is contradicatory : virtual and final have counter acting effects
    // Final wins here.

    // It prevents people from inheriting from your class altogether.

    // You can't inherit anything once you declared the final keyword in base class.

    return 0;
}