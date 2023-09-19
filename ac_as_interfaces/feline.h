#ifndef FELINE_H
#define FELINE_H
#include "animal.h"
#include "stream_insertable.h"

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

    virtual void stream_insert(ostream &out) const override
    {
        cout << "Feline [ description : " << m_description << ", fur_style : " << m_fur_style << "]";
    }
    string m_fur_style;
};

#endif // FELINE_H