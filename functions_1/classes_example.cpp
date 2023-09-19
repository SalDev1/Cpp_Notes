#include <iostream>
#include <sstream>
using namespace std;

// A function is a resuable piece of code which can take optional inputs
// and produce some desirable output.
class Student
{
private:
    int age;
    int standard;
    string first_name;
    string last_name;

public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_standard(int s)
    {
        standard = s;
    }
    int get_standard()
    {
        return standard;
    }
    void set_first_name(string fn)
    {
        first_name = fn;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string ln)
    {
        last_name = ln;
    }
    string get_last_name()
    {
        return last_name;
    }
    string to_string()
    {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
};

class Rectangle
{
public:
    int width{};
    int height{};
    void display()
    {
        cout << width << " " << height << endl;
    }
};

// The method where you could declare subclass from the main class.
// RectangleArea is the sub-class of Rectangle.
class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }
    void display()
    {
        cout << width * height << endl;
    }
};

int main()
{
    return 0;
}