#include "stream_insertable.h"
#include "animal.h"
#include "bird.h"
#include "cat.h"
#include "dog.h"
#include "crow.h"
#include "feline.h"
#include "pigeon.h"

#include <iostream>
using namespace std;

class Point : public StreamInsertable
{
public:
  Point() = default;
  Point(double x, double y) : m_x(x), m_y(y)
  {
  }

  // Override that is coming from the upstream class.
  virtual void stream_insert(ostream &out) const override
  {
    out << "Point [x : " << m_x << ", y:" << m_y << ']';
  };

private:
  double m_x;
  double m_y;
};

int main()
{
  Point p1(30, 40);
  // Interfaces are pretty powerful in c++ design.
  // This is working cause we are attaching our interfaces to our point class.
  cout << "p1 : " << p1 << endl;

  // operator(cout , p1); This is what the comipler is going to do .
  // You can apply this concept on each and every class we have defined.
  Animal a1("Hello I am a Feline");
  cout << "a1 : " << a1 << endl;

  Feline f1("Dark Gray", "Furry");
  cout << f1 << endl;

  // Smart Pointers
  // unique_ptr<Animal> animal0 = make_unique<Dog>("stripes", "dog1");
  // cout << *animal0 << endl;

  // Can even put animals in an array and print them polymorphically.

  // All you need to do is to implement the virtual functions that come with that interface
  // and that interface will pick them up and use them to do whatever it is you want to do.

  return 0;
}

/*
  • An abstract class with only pure virtual functions and no member variable can
   be used to model what is called an interface in Object Oriented Programming.

    An interface is a specification of something that will be fully implemented in a
   derived class, but the specification itself resides in the abstract class

   An interface is something that you can attach to its types to give them
   powers or features that they originally didn't have and saves you from having these features seperately
   in each class for real time.

   Basically we are going to create a separate interface and attach this file or using this to perform inhertiance
   with other classes.

   //friend method ==> specifices which data is going to be printed in the output stream.
*/