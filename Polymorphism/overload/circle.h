#ifndef CIRCLE_H
#define CIRCLE_H

#include "Oval.h"

class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius, string description);
    ~Circle();

    // virtual void draw() const
    // {
    //     cout << "Circle::draw() called Drawing " << m_description << " with radius " << get_x_radius() << endl;
    // }

    // Creating a Overload of the same function.
    virtual void draw(int color_depth) const
    {
        cout << "Circle::draw() called Drawing " << m_description << " with radius " << get_x_radius() << endl;
    }

    virtual void draw() const override
    {
        cout << "Circle::draw() called Drawing " << m_description << endl;
    }
};

#endif