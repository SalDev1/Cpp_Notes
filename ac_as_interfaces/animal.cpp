#include "animal.h"
#include <string.h>

#include <iostream>
using namespace std;

Animal::Animal(string description)
    : m_description(description)
{
}

Animal::~Animal()
{
}