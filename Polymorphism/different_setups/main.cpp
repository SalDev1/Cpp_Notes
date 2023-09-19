#include <iostream>
#include <memory>
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
  Circle circle1(7.2, "circle1");
  Oval oval1(13.3, 1.2, "Oval1");
  Circle circle2(11.2, "circle2");
  Oval oval2(31.3, 15.2, "Oval2");
  Circle circle3(12.2, "circle3");
  Oval oval3(53.3, 9.2, "Oval3");

  //  This will be slicing and storing only the shape information from different objects
  Shape shapes1[]{circle1, oval1, circle2, oval2, circle3, oval3};
  cout << "sizeof(circle1): " << sizeof(circle1) << endl;
  // This will be help us to avoid multiple copies in the range-based loop.
  // Calling the below loop , will call shape versions of draw methods.
  // References can't be used for assigning , cause they aren't left assignable in nature.
  for (Shape &s : shapes1)
  {
    // Size will be less as compared to the original size , cause of the slicing data from the derived objects.
    cout << "sizeof(object) : " << sizeof(s) << endl;
    s.draw(); // We are going to call shape versions of our draw methods.
  }

  // Polymorphism through virtual functions ===> managing derived objects using base pointers.
  cout << endl;
  cout << endl;

  Shape *shapes3[]{&circle1, &oval1, &circle2, &oval2, &oval3, &circle3};
  for (Shape *shape_ptr : shapes3)
  {
    cout << "Inside array , sizeof(*shape_ptr) : " << sizeof(*shape_ptr) << endl;
    shape_ptr->draw(); // We will get the most specific draw method called regarding to the specific shape object.
    cout << endl;
  }

  // Smart Pointers.
  // shared_ptr<Shape> shape4[]{make_shared<Circle>(12.2, "Circle4"),
  //                            make_shared<Oval>(10.0, 20.0, "Oval4")};
  // for (auto &s : shape4)
  // {
  //   s->draw();
  // }

  /*
    Polymorphism == basically designed to work with base pointers or references that are managing derived objects
    that are using polymorphism.
  */

  return 0;
}