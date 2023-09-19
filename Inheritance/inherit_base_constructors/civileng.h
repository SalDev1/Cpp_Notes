#ifndef CIVILENG_H
#define CIVILENG_H
#include "Engineer.h"

#include <iostream>
using namespace std;

class CivilEngineer : public Engineer
{
    friend ostream &operator<<(ostream &out, const CivilEngineer &operand);

public:
    CivilEngineer();
    CivilEngineer(string fullname, int age, string address, int contract_count,
                  string speciality);
    ~CivilEngineer();

    void build_road()
    {
        // get_full_name();  Compiler Error
        // m_full_name = "Daniel Gray"; Compiler Error
        // m_age = 45;  Compiler Error

        add(10, 2, 3);
    }

public:
    // using Person::do_something; // Compile Error.

private:
    string m_speciality{"None"};
};

#endif