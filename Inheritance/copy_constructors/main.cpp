#include <iostream>
using namespace std;

#include "person.h"
#include "civileng.h"
#include "engineer.h"

int main()
{
  // Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#47", 12);
  // cout << "eng1 : " << eng1 << endl;

  // cout << "------------------" << endl;
  /*
     The complier will automatically create a copy constructor
     for engineer object.
  */
  // Engineer eng2(eng1); // Copy Constructor.
  // cout << "eng2 : " << eng2 << endl;

  CivilEngineer ce1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12, "Road Strength");

  cout << "--------------" << endl;

  // We are reusing and copying our defined constructors properly.
  CivilEngineer ce2(ce1);
  cout << "eng2 : " << ce2 << endl;

  return 0;
}