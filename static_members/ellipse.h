#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

#include <iostream>
using namespace std;

class Ellipse : public Shape
{
    // We are able to inherit the static variable from the shape base class.
    // Ellipse maintains its own separate static variable.
public:
    Ellipse();
    Ellipse(double x_radius, double y_radius, string description);
    ~Ellipse();

    // Overriding the method from the base class(Shape)
    virtual int get_count() const override
    {
        return m_count;
    }

    static int m_count;

private:
    double m_x_radius;
    double m_y_radius;
};

#endif