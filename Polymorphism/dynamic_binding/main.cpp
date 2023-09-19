#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Oval.h"

void draw_shape(const Shape &shape)
{
    shape.draw();
}

void draw_shape_through_ptr(const Shape *shape)
{
    shape->draw();
}

int main()
{
    /*
      Now we are going to learn dynamic binding with virtual functions.

      First you need to add virtual keyword to your void functions in every header file and these
      methods are dynamically resolved.

    */
    Shape shape1("Shape1");
    Oval oval1(11.4, 3.5, "Oval1");
    Circle circle1(3.3, "Circle");

    // Slicing
    Shape shape2 = circle1;
    // It will slicing off circle and oval info from the circle1 and only use the shape object in circle1
    // Assigning a circle object to a shape object.
    // It is going to strip off all the things or objects we don't really need in the circle object.

    /*
      shape2 == Shape;
      circle == Shape ==> Oval ==> Circle.

      When you slicing off a certain data , you can't regain the sliced off data.

      YOu can't assign a reference and change the reference to store somewhere else.
      You can storing in pointers using array , but not reference.
      You can store in smart pointers as well.
    */

    // We are resolving the draw method dynamically and the compiler won't do any static binding as we have using virtual keyword.
    // In dynamic binding :- It is going to look at the type of the actual object that the pointer is managing.
    cout << "Polymorphism (dynamic binding) with references : " << endl;
    draw_shape(shape1);
    draw_shape(oval1);
    draw_shape(circle1);

    cout << endl;
    cout << "Polymorphism (dynamic binding) with pointers : " << endl;
    draw_shape_through_ptr(&shape1);
    draw_shape_through_ptr(&oval1);
    draw_shape_through_ptr(&circle1);

    cout << endl;
    cout << "No access to non virtual functions through polymorphism" << endl;
    Shape *shape_ptr = &oval1;
    shape_ptr->draw();

    // Dynamic binding or polymorphism is going to work , if your methods are virtual and they
    // are set up across your inhertiance hierarchy.

    /* If virtual keyword is not been used , the compiler will do the static binding and it is going to be using
       type of pointer which is shaped to resolve the selected method.
     */

    Shape *shape_collection[]{&shape1, &oval1, &circle1};

    for (Shape *s_ptr : shape_collection)
    {
        s_ptr->draw();
    }

    // Comparing object size
    // Dynamic Binding Objects will be much larger than compared to the static binding objects.
    cout << endl;

    cout << "sizeof(Shape) : " << sizeof(Shape) << endl;   // dynamic = 40;
    cout << "sizeof(Oval) : " << sizeof(Oval) << endl;     // dynamic = 56;
    cout << "sizeof(Circle) : " << sizeof(Circle) << endl; // dynamic = 56;

    return 0;
}