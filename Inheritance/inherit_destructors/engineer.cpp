#include "Person.h"
#include "Engineer.h"
#include <iostream>

#include <iostream>
using namespace std;

Engineer::Engineer()
{
    cout << "Default constructor for Engineer called..." << endl;
}

// Not an optimal solution
// Engineer::Engineer(const Engineer &source) : Person(source.m_full_name, source.m_age, source.get_address()),
//                                              contract_count(source.contract_count)
// {
//     cout << "Engineer copy Constructor for Engineer called ... " << endl;
// }

// Proper Copy Constructor
/*
  The compiler is really smart , it is going to slice off the outer engineer layer and
  only leaving the green person part and thus will be reusing the copy constructor we have in
  our person object

  This is optimal way to set up your copical structures if you have an inhertiance hierarchery.
*/
Engineer::Engineer(const Engineer &source) : Person(source), contract_count{source.contract_count}
{
    cout << "Engineer Copy Constructor Called .. " << endl;
}

// Initializer List
Engineer::Engineer(string fullname, int age, string address, int contract_count_param)
    : Person(fullname, age, address), contract_count(contract_count_param)
{
    cout << "Custom constructor for Engineer called..." << endl;
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name()
        << ",age:" << operand.get_age()
        << ",address : " << operand.get_address()
        << ",practice certificate id : " << operand.contract_count << endl;

    return out;
}

Engineer::~Engineer()
{
    cout << "Destructor for Engineer called ... " << endl;
}