#include <iostream>
using namespace std;

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool{Rectangle};

    // Switch statement
    // break:- It stops processing the switch block when a successful case has been found.
    // condition == Integral types and enums : int , long , unsigned short , etc.
    switch (tool)
    {
    case Pen:
        cout << "Pen has been selected" << endl;
        break;
    case Marker:
        cout << "Marker has been selected" << endl;
        break;
    case Eraser:
        cout << "Eraser has been selected" << endl;
        break;
    case Rectangle:
        cout << "Rectangle has been selected" << endl;
        break;
    case Circle:
        cout << "Circle has been selected" << endl;
        break;
    case Ellipse:
        cout << "Ellipse has been selected" << endl;
        break;
    default:
        cout << "No match found" << endl;
        break;
    }

    cout << "Moving On" << endl;
}