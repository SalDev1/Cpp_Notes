#include "Person.h"
#include "Engineer.h"
#include <iostream>

#include <iostream>
using namespace std;

Engineer::Engineer()
{
    cout << "Default constructor for Engineer called..." << endl;
}

// Inherting the base constructor
// Mainly we are initializing data of the member variables of the base class Person.
// Engineer::Engineer(string fullname, int age, string address) : Person(fullname, age, address)
// {
//     cout << "Inherting the base constructor" << endl;
// }

// Initializer List
Engineer::Engineer(string fullname, int age, string address, int contract_count_param)
    : Person(fullname, age, address), contract_count(contract_count_param)
{
    cout << "Custom constructor for Engineer called..." << endl;
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name()
        << " , age :" << operand.get_age()
        << " , address : " << operand.get_address()
        << ", practice certificate id : " << operand.contract_count << " ] " << endl;

    return out;
}

Engineer::~Engineer()
{
}