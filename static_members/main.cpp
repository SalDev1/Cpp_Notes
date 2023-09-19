#include "Ellipse.h"
#include "Shape.h"

#include <iostream>
using namespace std;

int main()
{

    // Inhertiance and Polymorphism using static variables.
    Shape shape1("shape1");
    cout << "shape count : " << Shape::m_count << endl;

    Shape shape2("shape2");
    cout << "shape count : " << Shape::m_count << endl;

    Shape shape3;
    cout << "shape count : " << Shape::m_count << endl;

    cout << endl;

    Ellipse ellipse1(10, 12, "ellipse1");
    cout << "shape count : " << Shape::m_count << endl;
    cout << "ellipse count : " << Ellipse::m_count << endl;

    cout << endl;
    Shape *shapes[]{&shape1, &ellipse1};
    for (auto &s : shapes)
    {
        cout << "count : " << s->get_count() << endl;
    }

    return 0;
}