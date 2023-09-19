#ifndef DOG_H
#define DOG_H
#include "feline.h"

#include <iostream>
using namespace std;

class Dog : public Feline
{
public:
    Dog() = default;
    Dog(string fur_style, string description);
    virtual ~Dog();

    virtual void bark() const
    {
        cout << "Dog::bark called : Woof!" << endl;
    }

    void do_some_dog_thingy()
    {
        cout << "Doing some dog thingy.... , speed : " << m_speed << endl;
    }

private:
    double m_speed{};
};

#endif // DOG_H