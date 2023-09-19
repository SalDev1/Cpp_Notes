#include <iostream>
using namespace std;

#include "shape.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    // Pure virtual functions is an option provided by c++ , meaning that the method wasn't to be implemented in the base class.
    // They are meant to be overriden and implemented by inheritance class.

    // Another side effect is that the complier is going to prevent you from creating objects in the given class.

    // It is the idea or the presentation of a shape without going into the concerete information of
    // how shape really works.

    // Shape *shape = new Shape(); // Error : Shape is an abstract class
    // can't create objects of it.

    // The below code does the polymorphism.
    // But still , you can use the base pointer to manage derived objects.
    const Shape *shape_react = new Rectangle(10, 10, "rect1");
    double surface = shape_react->surface();

    cout << "dynamic type of shape_rect : " << typeid(*shape_react).name() << endl; // This really shows that our base pointer is managing rectangle object
    cout << "The surface of shape rect is : " << surface << endl;

    cout << "-----------------------------" << endl;
    const Shape *shape_circle = new Circle(10, " circle1");
    surface = shape_circle->surface();
    cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << endl; // This really shows that our base pointer is managing circle object
    cout << "The surface of the circle is : " << surface << endl;

    return 0;
}

/*
   • If a class has at least one pure virtual function, it becomes an
   abstract class
   • You can't create objects of an abstract class, if you do that , you'll
   get a hard compiler error
   • Derived classes from an abstract class must explicitly override all the
   pure virtual functions from the abstract parent class, if they don't
   they themselves become abstract
   Pure virtual functions don't have an implementation in the abstract
   class. They are meant to be implemented by deriving classes
   • You can't call the pure virtual functions from the constructor of the
   abstract class
    The constructor of the abstract class is used by deriving class to build
    up the base part of the object
*/