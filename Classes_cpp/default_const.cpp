#include <iostream>
using namespace std;

class Rectangle
{
private:
    double breadth{5};
    double length{6};

public:
    // Assigning a default constructor to set up an empty default constructor.
    Rectangle() = default;

    Rectangle(double len_param, double bre_param)
    {
        breadth = bre_param;
        length = len_param;
    }

    double area()
    {
        return length * breadth;
    }

    double perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1(20, 40);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    return 0;
}