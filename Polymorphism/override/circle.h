#ifndef CIRCLE_H
#define CIRCLE_H

#include "Oval.h"

class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius, string description);
    ~Circle();

    // We are overriding the below method expilictly using override keyword
    virtual void draw() const override
    {
        cout << "Circle::draw() called Drawing " << m_description << " with radius " << get_x_radius() << endl;
    }
};

#endif