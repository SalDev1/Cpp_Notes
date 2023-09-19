#ifndef FELINE_H
#define FELINE_H
#include "animal.h"

#include <iostream>
using namespace std;

class Feline : public Animal
{
public:
    Feline() = default;
    Feline(string fur_style, string description);
    virtual ~Feline();

    virtual void run() const
    {
        cout << "Feline " << m_description << " is running" << endl;
    }

    // This method doesn't belong to polymorphism or inhertiance of the Animal.
    void do_some_feline_thingy()
    {
        cout << "Doing some feline thingy .... " << endl;
    }

    string m_fur_style;
};

#endif // FELINE_H