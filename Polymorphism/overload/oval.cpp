#include "Oval.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Oval::Oval(double x_radius_param, double y_radius_param, string description_param) : Shape(description_param), m_x_radius(x_radius_param), m_y_radius(y_radius_param)
{
}

Oval::~Oval()
{
}