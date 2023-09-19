#include "Protected.h"

Person::Person(string first_name_param, string last_name_param)
{
    first_name = first_name_param;
    last_name = last_name_param;
}

ostream &operator<<(ostream &out, const Person &person)
{
    out << "Person [ " << person.first_name << " " << person.last_name << "]";
    return out;
}

void Person::set_first_name(string first_name_param)
{
    first_name = first_name_param;
}

void Person::set_last_name(string last_name_param)
{
    last_name = last_name_param;
}