#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    cout << "Default constructor for Person called... " << endl;
}

// Copy Constructor
Person::Person(const Person &source) : m_full_name{source.m_full_name}, m_age{source.m_age}, m_address{source.m_address}
{
    cout << "Person Copy Constructor Called ... " << endl;
}

/*
  Not reusing the copy constructor we have in Person m_address is private to Person, can't be directly accessed
  from Engineer object.
  We could set up a public method to return the address but
  that could go against your design guidelines.
*/

Person::Person(string fullname, int age,
               string address) : m_full_name{fullname}, m_age{age},
                                 m_address{address}
{
    cout << "Custom constructor for Person called... " << endl;
}

void Person::do_something() const
{
    cout << "Hello World" << endl;
}

ostream &operator<<(ostream &out, const Person &person)
{
    out << "Person [Full name :" << person.get_full_name() << ", Age:" << person.get_age() << ", Address:" << person.get_address() << "]";
    return out;
}

Person::~Person()
{
    cout << "Destructor for Person called : " << endl;
}
