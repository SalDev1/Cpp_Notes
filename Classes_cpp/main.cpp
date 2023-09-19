#include <iostream>
#include "Cylinder.h" //This is good design.
using namespace std;
/*
  The preprocessor will go into that header file , fetches whatsoever is present in the file
  and shows something in the terminal complied by the complier.
*/

// :: scope resolution operator.

int main()
{
  // Static Object ==> Normal Object
  Cylinder c1(10, 5);
  cout << "volume : " << c1.volume() << endl;
  cout << "radius : " << c1.get_base_radius() << endl;
  cout << "height : " << c1.get_height() << endl;
  return 0;
}