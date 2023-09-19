#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"

#include <iostream>
using namespace std;

class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(string wing_color, string description);
    ~Pigeon();

    virtual void coo() const
    {
        cout << "Pigeon::coo called for pigeon : " << m_description << endl;
    }

    virtual void breathe() const
    {
        cout << "Pigeon::breathe called for : " << m_description << endl;
    }

    // Compile Error , as we are trying to override a final method from the base class.
    // virtual void fly() const override
    // {
    //     cout << "Pigeon::fly() called for bird : " << m_description << endl;
    // }
};

#endif // PIGEON_H