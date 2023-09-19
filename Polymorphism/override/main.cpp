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
  Circle circle1(7.2, "circle1");
  Oval oval1(13.3, 1.2, "Oval1");
  Circle circle2(11.2, "circle2");
  Oval oval2(31.3, 15.2, "Oval2");
  Circle circle3(12.2, "circle3");
  Oval oval3(53.3, 9.2, "Oval3");

  // Raw pointers
  // Getting the polymorphic behaviour.
  Shape *shapes3[]{&circle1, &oval1, &circle2, &oval2, &oval3, &circle3};
  for (Shape *s_ptr : shapes3)
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

/*
   Override :- Helps us to avoid errors in inhertiance hierarchies while managing derived objects.
   It is recommended to use override keyword to be used virtual functions because it will help you to make less mistakes.

   It will protect you for easy to make typos that are really going to give you a hard time
   otherwise.
*/