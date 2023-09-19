#ifndef ENGINEER_H
#define ENGINEER_H

#include "Person.h"
#include <iostream>
using namespace std;

// Engineer is doing private inhertiance
// Not private in the person class ==> to private level access.
class Engineer : public Person
{
    friend ostream &operator<<(ostream &out, const Engineer &operand);

public:
    Engineer();
    Engineer(const Engineer &engineer);
    Engineer(string fullname, int age, string address, int contract_count);
    ~Engineer();

    int get_contract_count() const
    {
        return contract_count;
    }

    void build_something()
    {
    }

private:
    int contract_count{0};
};

#endif