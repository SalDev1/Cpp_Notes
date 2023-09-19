#include "Shape.h"

int Shape::m_count{0};

Shape::Shape(string description) : m_description(description)
{
    ++m_count;
}

Shape::Shape()
{
    ++m_count;
}

Shape::~Shape()
{
    --m_count;
}