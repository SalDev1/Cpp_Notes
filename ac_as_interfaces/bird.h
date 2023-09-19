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

    virtual void fly() const
    {
        cout << "Bird::fly() called for bird : " << m_description << endl;
    }

private:
    string m_wing_color;
};

#endif // BIRD_H