#ifndef BIRD_H
#define BIRD_H
#include "animal.h"

#include <iostream>
using namespace std;

class Bird : public Animal
{
public:
    Bird() = default;
    Bird(string wing_color, string description);

    ~Bird();

    // This is contradictory : virtual and final have counter acting effects.
    // Final wins here.
    virtual void fly() const final
    {
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }

private:
    string m_wing_color;
};

#endif // BIRD_H