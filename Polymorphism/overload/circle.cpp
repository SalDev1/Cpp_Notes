#include "Circle.h"
#include "Shape.h"
#include <iostream>
using namespace std;
// As Circle is performing public inhertiance with the Oval.
Circle::Circle(double radius, string description)
    : Oval(radius, radius, description){

      };

Circle::~Circle()
{
}