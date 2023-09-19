#include "Person.h"
#include "Nurse.h"

Nurse::Nurse()
{
}

ostream &operator<<(ostream &out, const Nurse &operand)
{
    out << "Nurse [Full name : " << operand.get_full_name()
        << ",age:" << operand.get_full_name()
        << ",address : " << operand.get_age()
        << ",practice certificate id : " << operand.practice_certificate_id << endl;

    return out;
}

Nurse::~Nurse()
{
}