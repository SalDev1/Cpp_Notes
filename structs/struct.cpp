#include <iostream>
using namespace std;

// Very similar to the classes , but the struct members are always public in nature.
struct Cat
{
private:
    string name{};

public:
    Cat(string_view &cat_name)
    {
        name = cat_name;
    }
};

struct Dog
{
    string name{};
};

struct Point
{
    double point_x;
    double point_y;
};

// Example of creating a node in the linked list.
struct Node
{
    int data;
    Node *next;
};

void print_point(Point p1)
{
    cout << "Point : [ " << p1.point_x << " , " << p1.point_y << " ] " << endl;
}

int main()
{
    // Static way of calling a struct
    Dog d1;
    d1.name = "Tommy";

    // Dynamic way of calling a struct
    Dog *p_dog1 = new Dog();
    p_dog1->name = "Husky";

    Point p1;
    p1.point_x = 27.4;
    p1.point_y = 50.5;

    print_point(p1);

    return 0;
}