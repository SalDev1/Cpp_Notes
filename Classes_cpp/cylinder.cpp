#include "Cylinder.h"

Cylinder::Cylinder(double rad_param, double height_param)
{
    base_radius = rad_param;
    height = height_param;
};

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

// In order to use the class from the header, add the class name + two ::
