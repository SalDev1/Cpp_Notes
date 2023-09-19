#include "Person.h"
#include "Engineer.h"
#include "civileng.h"
#include <iostream>
using namespace std;

CivilEngineer::CivilEngineer()
{
    cout << "Default constructor for Civil Engineer called..." << endl;
};

CivilEngineer::CivilEngineer(string fullname, int age, string address, int contract_count,
                             string speciality_param) : Engineer(fullname, age, address, contract_count), m_speciality(speciality_param)
{
    cout << "Custom constructor for Civil Engineer called..." << endl;
}

// BAD :- Compiler Error = m_address is private to person.
//  CivilEngineer::CivilEngineer(string fullname, int age, string address, int contract_count,
//                               string speciality_param) : Engineer(fullname, age, address, contract_count), m_speciality(speciality_param)
//  {
//      m_full_name = fullname;
//      m_age = age;
//      m_address = address;
//      m_speciality = speciality_param;
//      cout << "Custom constructor for Civil Engineer called..." << endl;
//  }

// BAD-> Because we are directly accessing the member variables of Person , which we can't do it.
//  CivilEngineer::CivilEngineer(string fullname, int age, string address, int contract_count,
//                               string speciality_param) : m_full_name(fullname), m_age(age), m_address(address), m_speciality(speciality_param)
//  {
//      cout << "Custom constructor for Civil Engineer called..." << endl;
//  }

ostream &operator<<(ostream &out, const CivilEngineer &operand)
{
    out << "CivilEngineer [ Full Name : "
        << operand.get_full_name() << " , age : "
        << operand.get_age() << " , contract_count : "
        << operand.get_contract_count() << ", speciality : " << operand.m_speciality << "]";

    return out;
}

CivilEngineer::~CivilEngineer()
{
}