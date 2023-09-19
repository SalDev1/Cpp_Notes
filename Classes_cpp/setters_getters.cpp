#include <iostream>
using namespace std;

/*
  We are going to learn about getters and setters.
  These are methods to read and modify member variables of a class.

  Setters == setting a value or parameters in the class;
  getters == retreive or getting a value.
*/
class Cylinder
{
private:
    double base_radius;
    double height;

public:
    // Getters
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // Setters
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }
};

int main()
{
    Cylinder c1;
    // Modifying our constructor.
    c1.set_base_radius(10);
    c1.set_height(20);

    cout << c1.get_base_radius() << endl;

    cout << c1.get_height() << endl;
    return 0;
}