#include <iostream>
using namespace std;

#include "person.h"
#include "civileng.h"
#include "engineer.h"

int main()
{
  Person person1("John Snow", 27, "Winterfell Cold 335t#75");
  cout << "person1 : " << person1 << endl;

  cout << "-----------------------" << endl;
  Engineer eng1("Daniel Gray", 41, "Green Sky Oh BLUE 335t#75", 12);
  cout << "eng1 : " << eng1 << endl;

  cout << "-----------------------" << endl;
  CivilEngineer ce1("Daniel Gray", 51, "Green Sky Oh BLUE 335t#75", 31, "Road Strength");
  cout << "eng1 : " << ce1 << endl;

  return 0;
}