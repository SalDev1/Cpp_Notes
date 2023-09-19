#include "crow.h"
#include <iostream>
using namespace std;

Crow::Crow(string wing_color, string description)
    : Bird(wing_color, description)
{
}

Crow::~Crow()
{
}