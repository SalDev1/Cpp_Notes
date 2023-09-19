#include "Person.h"
#include "Engineer.h"
#include "civileng.h"
#include <iostream>
using namespace std;

CivilEngineer::CivilEngineer()
{
    cout << "Default constructor for Civil Engineer called..." << endl;
};

ostream &operator<<(ostream &out, const CivilEngineer &operand)
{
    out << "CivilEngineer [ Full Name : "
        << operand.get_full_name() << "age : "
        << operand.get_age() << ",contract_count : "
        << operand.get_contract_count() << "" << operand.m_speciality << "]";

    return out;
}

CivilEngineer::~CivilEngineer()
{
}