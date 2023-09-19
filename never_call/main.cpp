#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor called" << std::endl;
        this->setup(); // Static Binding Kicks in.
    }
    virtual ~Base()
    {
        std::cout << "Base destructor called" << std::endl;
    }
    virtual void setup()
    {
        std::cout << "Base::setup() called" << std::endl;
        m_value = 10;
    }
    virtual void clean_up()
    {
        std::cout << "Base::clean_up() called" << std::endl;
    }
    int get_value()
    {
        return m_value;
    }

protected:
    int m_value;
};

class Derived : public Base
{
public:
    Derived()
        : Base()
    {
        std::cout << "Derived constructor called" << std::endl;
    }
    virtual ~Derived()
    {
        std::cout << "Derived destructor called" << std::endl;
    }

    virtual void setup() override
    {
        std::cout << "Derived::setup() called" << std::endl;
        m_value = 100;
    }
    virtual void clean_up() override
    {
        std::cout << "Derived::clean_up() called" << std::endl;
    }
};

int main()
{
    // Don't call virtual functions from constructors and destructors.
    /*
      Calling a virtual function from a constructor or destructor won't give you polymorphic results.

      The call will never go to a more derived class than the currently executing constructor or destructor.
      In other words you will get static binding results.

      Never call vritual functions from constructors or destructors.
    */

    // Call virtual functions on fully constructed objects.

    cout << endl;
    Base *p_base = new Derived;

    // This will help us get polymorphic behaviour.
    p_base->setup();
    // This will call the derived version of setup here(Dynamic Binding behaviour)

    auto value = p_base->get_value();
    cout << "value : " << value << endl; // 100;

    p_base->clean_up();
    delete p_base;

    return 0;
}