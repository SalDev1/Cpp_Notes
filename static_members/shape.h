#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape
{
    // Here we are learning how the static members plays in polymorphism and inhertiance.
public:
    Shape();
    Shape(string description);
    virtual ~Shape();

    void draw() const
    {
        cout << "Shape :: draw() called for : " << m_description << endl;
    }

    virtual int get_count() const
    {
        return m_count;
    }

    static int m_count;

protected:
    string m_description;
};

#endif