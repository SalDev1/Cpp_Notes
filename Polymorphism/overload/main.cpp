#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Oval.h"

int main()
{
  // Circle circle1(7.2, "Circle1");
  // Oval oval1(13.3, 1.2, "Oval1");
  // Circle circle2(11.2, "Circle2");
  // Oval oval2(31.3, 15.2, "Oval2");
  // Circle circle3(12.2, "Circle3");
  // Oval oval3(53.3, 9.2, "Oval3");

  // circle1.draw();
  // circle1.draw(44);
  // // circle1.draw(44);

  // oval1.draw();
  // oval1.draw(55);

  // This method is not declared at the base level.

  // Shape *shape_ptr = new Circle(10, "Circle1");
  // shape_ptr->draw(45.2, "Red");

  return 0;
}

/*
  Once you overide a single overload of your virtual functions. All the other overloads are going to be hidden and they
  hidden and they won't be usable anymore.

  You won't be able to use downstream inhertiance classes , if you don't want that you have to explicitly override eacch
  of them and that's how it's going to work.

  If you override one overload of your virtual functions in the base class,
  all the other ones are going to be hidden and you have no choice but to explicitly override them
  for them to be available and usable in downstream class.

  // ***Condition***:-
  The only methods that are going to participate in shape poymorphism are the methods that
  are declared in the base class and they are virtual.

  If you try to override one of the overload virtual functions , all the other overloads that you have declared in inhertiance hierarchies will be
  hidden or eclipsed by this one override function.


  Now , we have overridden all the overloads.
*/