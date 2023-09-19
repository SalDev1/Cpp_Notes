#include "feline.h"
#include <iostream>
using namespace std;

Feline::Feline(string fur_style, string description)
    : Animal(description), m_fur_style(fur_style)
{
}

Feline::~Feline()
{
    cout << "Feline destructor called : " << endl;
}