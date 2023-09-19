#include <iostream>
using namespace std;

// Variable : Declaration and definition.
double weight{25};

double add(double a, double b)
{
    return a + b;
}
// Calling a structure.
struct Point
{
    double m_x{};
    double m_y{};
};

class Person
{
private:
    string full_name{"Salman Uddin"};
    int age{20};

public:
    Person(const string &names_param, int age_param);

    void print_info() const
    {
        cout << "name : " << full_name << " , age : " << age << endl;
    }
};
// You can't have more than one definition of anything that you are declaring.
int main()
{
    cout << weight << endl;
    cout << add(3, 5) << endl;

    Point p1;
    p1.m_x = 10;
    p1.m_y = 20;

    cout << endl;
    cout << "p1.m_x : " << p1.m_x << " , p1.m_y: " << p1.m_y << endl;
    return 0;
}
