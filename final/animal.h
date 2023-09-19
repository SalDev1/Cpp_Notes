#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
public:
    Animal() = default;
    Animal(string description);
    virtual ~Animal();

    virtual void breathe() const
    {
        cout << "Animal::breathe called for : " << m_description << endl;
    }

protected:
    string m_description;
};

#endif // ANIMAL_H