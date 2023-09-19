#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h"

// This is basically a guard which helps us to avoid redefinitions of the
// selected header file.

class Cylinder
{

private:
    // Member variables
    double base_radius{1};
    double height{1};

public:
    // Constructors
    Cylinder() = default;
    // Leaving the prototype in this "cylinder_methods.cpp"
    Cylinder(double rad_param, double height_param);
    // Functions (methods)
    double volume();
    // Setter and getter methods
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    void set_base_radius(double rad_param);
    void set_height(double height_param);
};
#endif

Cylinder::Cylinder(double rad_param, double height_param)
{
    base_radius = rad_param;
    height = height_param;
};

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

void Cylinder::set_base_radius(double rad_param)
{
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param)
{
    height = height_param;
}