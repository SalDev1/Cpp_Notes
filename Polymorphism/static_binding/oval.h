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

    void draw() const
    {
        cout << "Oval::draw() called Drawing " << m_description
             << " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius << endl;
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
