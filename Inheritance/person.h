#ifndef PERSON_H
#define PERSON_H

#include <string.h>
#include <iostream>
using namespace std;

// This is the base class.
class Person
{

private:
    string first_name{"Mysterious"};
    string last_name{"Person"};

public:
    Person() = default;
    Person(string first_name, string last_name);
    ~Person(){};
    friend ostream &operator<<(ostream &out, const Person &person);
    void set_first_name(string fn);
    void set_last_name(string ln);

    // Add a const to the getters that you are defining.
    string get_first_name()
        const
    {
        return first_name;
    }

    string get_last_name()
        const
    {
        return last_name;
    }
};
#endif