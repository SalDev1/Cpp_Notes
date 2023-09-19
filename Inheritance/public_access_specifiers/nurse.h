#ifndef NURSE_H
#define NURSE_H

#include "Person.h"
#include <iostream>
using namespace std;

class Nurse : protected Person
{
    friend ostream &operator<<(ostream &out, const Nurse &operand);

public:
    Nurse();
    ~Nurse();

    void treat_unwell_person()
    {
        // Deriving properties from the base class(Person).
        m_full_name = "John Snow"; // OK
        m_age = 19;                // OK
    };

private:
    int practice_certificate_id{0};
};

#endif