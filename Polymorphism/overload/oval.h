#ifndef OVAL_H
#define OVAL_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Oval : public Shape
{
public:
    Oval() = default;
    Oval(double x_radius, double y_radius, string description);
    ~Oval();

    // This method will hide all the other overloads we had for the draw method here.
    // And this will be only method which is available in downstream classes.
    virtual void draw() const override
    {
        cout << "Oval::draw() called . Drawing " << m_description
             << " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius << endl;
    }

    // This method is not part of the shape polymorphism.
    // Because this virtual function is not declared at base level class(Shape).
    virtual void draw(int color_depth, string color) const
    {
        cout << "Drawing with color depth : " << color_depth << " and color"
             << color << endl;
    }

protected:
    double get_x_radius() const
    {
        return m_x_radius;
    }
    double get_y_radius() const
    {
        return m_y_radius;
    }

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif
