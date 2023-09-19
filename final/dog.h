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

    virtual void breathe() const override
    {
        cout << "Dog::breathe called for : " << m_description << endl;
    }

    // The run method in subclasses of dog can't be overrided.
    // No downstream classes will be able to override the run method
    // Further , derived classes are forced to use the implementation in Dog.
    void run() const override final
    {
        cout << "Dog " << m_description << " is running" << endl;
    }
};

#endif // DOG_H