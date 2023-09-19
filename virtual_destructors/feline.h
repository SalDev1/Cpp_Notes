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
    string m_fur_style;
};

#endif // FELINE_H