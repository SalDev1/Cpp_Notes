#ifndef CAT_H
#define CAT_H
#include "feline.h"

#include <iostream>
using namespace std;

// If anybody tries to inherit or derive from cat, they are going to get the compiler error.
class Cat final : public Feline
{
public:
    Cat() = default;
    Cat(string fur_style, string description);
    virtual ~Cat();

    // Interesting Fact #2
    // Uselesss virtual method . Cat is final , so no one will be deriving from
    // this class and have a chance to specialize it.
    virtual void meow() const
    {
        cout << "Cat::meow() called for cat " << m_description << endl;
    }

    virtual void run() const override
    {
        cout << "Cat " << m_description << " is running" << endl;
    }
};

#endif // CAT_H