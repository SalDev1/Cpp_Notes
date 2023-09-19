#include "bird.h"
#include <iostream>
using namespace std;

Bird::Bird(string wing_color, string description)
    : Animal(description), m_wing_color(wing_color)
{
}

Bird::~Bird()
{
}