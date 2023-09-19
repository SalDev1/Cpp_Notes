#include "Person.h"
#include "Engineer.h"
#include <iostream>

Engineer ::Engineer()
{
}

ostream &operator<<(ostream &out, const Engineer &operand)
{
    out << "Engineer [Full name : " << operand.get_full_name()
        << ",age:" << operand.get_full_name()
        << ",address : " << operand.get_age()
        << ",practice certificate id : " << operand.contract_count << endl;

    return out;
}

Engineer::~Engineer()
{
}