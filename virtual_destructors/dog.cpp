#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string fur_style, string description)
    : Feline(fur_style, description)
{
}

Dog::~Dog()
{
    cout << "Dog Destructor called : " << endl;
}