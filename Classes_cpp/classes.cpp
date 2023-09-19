#include <iostream>
using namespace std;

// This is how our classes look like.
// If the member is private , you can't use the property outside of the class.

const double PI = 3.14;

// Members of the class are private by default.
// So use the keyword public , to make the properties accessible outside the class.
// Always keeping the main variables private is an example of good design.
class Cylinder
{
private:
    // Member variables can be static variables , pointers , but can't be references.
    double base_radius{};
    double height{};

public:
    // Mainly used to initialize constructor.
    Cylinder()
    {
        base_radius = 1.0;
        height = 1.0;
    }
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

class Circle
{
private:
    int radius = 10;

public:
    Circle() = default;
    // Circle()
    // {
    // }
    double area()
    {
        return PI * radius * radius;
    }
};

int main()
{
    // Classess are mechanisms which helps us to built our own data types.
    // It helps us to set the blueprints of our classes type.
    // We are using to use blueprints to built actual objects.
    // We can class as a blueprint and we can create real world objects.

    Cylinder c1; // Creating a real world object from the classes defined.

    // Changing the member variables.
    cout << "volume c1 : " << c1.volume() << endl;

    Circle c2;
    cout << "circle c2 : " << c2.area() << endl;

    return 0;
}

/*
  Class member variables can either be raw stack variables or pointers
  Members can't be references
  Classes have functions (methods) that let them do things
  Class methods have access to the member variables, regardless
  of whether they are public or private
  Private members of classes ( variables and functions) aren't accessible from the outside of the class definition
*/