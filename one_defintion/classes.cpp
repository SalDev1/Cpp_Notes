#include <iostream>
using namespace std;

class Person
{
private:
    string full_name;
    int age;

public:
    Person(const string &names_param, int age_param);
    void print_info()
    {
        cout << "name : " << full_name << " , Age : " << age << endl;
    }
    static int person_count;
};

int Person::person_count = 8;
// Initialize a constructor from the given class.
// Classes can be declare once and used in multiple files.
Person::Person(const string &names_param, int age_param)
    : full_name{names_param}, age{age_param}
{
    ++person_count;
};

int main()
{
    Person p1("Salman Uddin", 20);
    p1.print_info();
    return 0;
}