#ifndef ENGINEER_H
#define ENGINEER_H
#include "Person.h"

// Engineer is doing private inheritance
class Engineer : private Person
{
    friend ostream &operator<<(ostream &out, const Engineer &operand);

public:
    Engineer();
    ~Engineer();

    void build_something()
    {
        m_full_name = "Neha Williams";
        m_age = 23;
        // m_address = "678346578" ; Compiler Error
    }

private:
    int contract_count{0};
};

#endif