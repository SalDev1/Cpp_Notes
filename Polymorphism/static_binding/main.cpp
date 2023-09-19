#include <iostream>
using namespace std;

#include "Circle.h"
#include "Oval.h"
#include "Shape.h"

/*
  You can write down these functions if you want to draw a shape repetitively.
*/
void draw_circle(const Circle &circle)
{
    circle.draw();
}

void draw_oval(const Oval &oval)
{
    oval.draw();
}

int main()
{
    // Static Binding. == The compiler is going to look for the type of the base pointer
    // or reference that we are using to store different shape objects.
    Shape shape1("Shape1");
    shape1.draw();

    Oval oval1(2.0, 3.5, "Oval1");
    oval1.draw();
    Circle circle1(3.3, "Circle");
    circle1.draw();

    cout << endl;
    cout << "Calling methods through pointers : static binding" << endl;

    //    Static binding with base class pointer
    Shape *shape_ptr = &shape1;
    shape_ptr->draw(); // We would wish for Shape::draw() to be called.

    shape_ptr = &oval1;
    shape_ptr->draw(); // We would wish for Oval::draw() to be called.

    shape_ptr = &circle1;
    // shape_ptr->draw(); // We would wish for Circle::draw() to be called.

    // Static binding with base class reference.

    cout << endl;
    cout << "Calling methods through references : " << endl;

    // Shape &shape_ptr_1 = shape1;
    // shape_ptr_1.draw();

    // Shape &shape_ptr_2 = oval1;
    // shape_ptr_2.draw(); // Draw an Oval

    // Shape &shape_ptr_3 = circle1;
    // shape_ptr_3.draw();

    // Polymorphism wants us to create one draw method which handles every type of shape.
    // and also setting one array collection which takes different shape pointers and references of every shape we defined.

    draw_circle(circle1);
    draw_oval(oval1);

    // Shapes stored in collections
    Circle circle_collection[]{circle1, Circle(10.0, "Circle2"), Circle(20.0, "Circle3")};
    Oval oval_collection[]{oval1, Oval(22.3, 51.1, "oval2")};
    // More arrays as you have more shape types, 100? Messy right? True Fact , it will get messy.

    // Comparing object sizes.
    cout << endl;
    cout << "sizeof(Shape) : " << sizeof(Shape) << endl;   // static = 32;
    cout << "sizeof(Oval) : " << sizeof(Oval) << endl;     // static = 48;
    cout << "sizeof(Circle) : " << sizeof(Circle) << endl; // static = 48;

    return 0;
}
