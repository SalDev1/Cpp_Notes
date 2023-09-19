#include "Ellipse.h"
#include "Shape.h"

int Ellipse::m_count{0};

Ellipse::Ellipse(double x_radius_param, double y_radius_param, string d_param) : Shape(d_param), m_x_radius(x_radius_param), m_y_radius(y_radius_param)
{
    ++m_count;
}

Ellipse::Ellipse()
{
    ++m_count;
}

Ellipse::~Ellipse()
{
    --m_count;
}