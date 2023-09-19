#ifndef ENGINEER_H
#define ENGINEER_H

#include "Person.h"
#include <iostream>
using namespace std;

// Engineer is doing private inhertiance
// Not private in the person class ==> to private level access.
class Engineer : private Person
{
    friend ostream &operator<<(ostream &out, const Engineer &operand);

public:
    Engineer();
    ~Engineer();

    int get_contract_count() const
    {
        return contract_count;
    }
    // If you want to make some member variables accessible to other downstream classes , do this.
    // You can't ressurect that is something already private to the upstream class / base class.
    // Protected access level which is been passed down to the downstream
protected:
    using Person::get_address;
    using Person::get_age;
    using Person::get_full_name;
    // using Person::m_address; // Compiler Error

public:
    using Person::m_full_name;
    //   using Person::m_address;  // Compiler Error.

    // This will resurrect all the overloads that we have in our upstream
    /* We only resurrect only based on function and the same name for a member function can be
     shared by many overloads. */
    using Person::add;

    void build_something()
    {
    }

private:
    int contract_count{0};
};

#endif