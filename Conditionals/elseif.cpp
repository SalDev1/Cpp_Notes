#include <iostream>
using namespace std;

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    // Else if == testing for several different conditions
    int tool{Rectangle};
    if (tool == Pen)
    {
        cout << "Pen has been selected" << endl;
    }
    else if (tool == Marker)
    {
        cout << "Marker has been selected" << endl;
    }
    else if (tool == Eraser)
    {
        cout << "Eraser has been selected" << endl;
    }
    else if (tool == Circle)
    {
        cout << "Circle has been selected" << endl;
    }
    else if (tool == Ellipse)
    {
        cout << "Ellipse has been selected" << endl;
    }
    else if (tool == Rectangle)
    {
        cout << "Rectangle has been selected" << endl;
    }

    cout << "Moving On!!" << endl;
}