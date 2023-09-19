#include <iostream>
using namespace std;

#include "person.h"
#include "civileng.h"
#include "engineer.h"

int main()
{
  // So bascially in this concept Engineer is trying to mock like Person.
  // Engineer will be taking three parameters just like the person constructor.
  // Cause we used , using Person :: Person in engineer.h
  Engineer e1("Daniel Gray", 23, "asedwefwefwefe");
  cout << "eng1 : " << e1 << endl;
}

/*
   Copy constructors are not inherited. But you won't usually notice this as the
   compiler will insert an automatic copy constructor

   •Inherited constructors are base constructors. Ihey have no knowledge of the
   derived class. Any member from the derived class will just contain junk or
   whatever default value it's initialized with

   •Constructors are inherited with whatever access specifier they had in base class

   •On top of derived constructors, you can add your own that possibly properly
    initialize derived member variables

   •Inheriting constructors adds a level of confusion to your code, it's not clear which
    constructor is building your object. It is recommended to avoid them and only use
    this feature if no other option is available.
*/