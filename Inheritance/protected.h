#ifndef PROTECTED_H
#define PROTECTED_H

#include <iostream>
using namespace std;

class Person
{

protected:
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

/*
    Sometimes we want members from the base class to be at least be acessible
    from the derived class , but still be inaccessible from the outside.

    We can achieve this using the protected access specifier.
    Using protected specifier , we will be able to access , read and write
    into these member variables from derived classes so far.

    Using protected  specifier , gives the ability to derive class to perform read and
    write operations on the member variables of the base class.
   */
// The member variables of the Person class are protected.
// The Player class will be same as it is.
