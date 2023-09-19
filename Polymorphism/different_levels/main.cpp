#include "dog.h"
#include "cat.h"
#include "pigeon.h"
#include "animal.h"
#include "crow.h"
#include "feline.h"

#include <iostream>
using namespace std;

int main()
{

    // Aim:- Providing the polymorphism ability at different levels of inhertiance hierarchy.

    cout << endl;
    cout << "Animal Polymorphism" << endl;
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    // Animal pointer for managing crazy animals.
    Animal *animals[]{&dog1, &cat1, &pigeon1, &crow1};

    for (const auto &animal : animals)
    {
        animal->breathe(); // Calling breathe method through a base animal pointer.
    }

    cout << endl;
    cout << "Feline Polymorphism" << endl;
    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");
    // Pigeon pigeon2("white", "pigeon2"); // Putting pigeon in felines will result in complier error.

    // Feline pointer for managing crazy Felines.
    Feline *felines[]{&dog2, &cat2};

    for (const auto &feline : felines)
    {
        feline->run();
    }

    // Birds pointer for managing crazy Birds.
    cout << endl;
    cout << "Bird Polymorphism" << endl;
    Pigeon piegon2("white", "pigeon2");
    Crow crow2("black", "crow2");

    Bird *birds[]{&piegon2, &crow2};

    for (const auto &bird : birds)
    {
        bird->fly();
    }

    return 0;
}