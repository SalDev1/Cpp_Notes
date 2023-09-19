#include <iostream>
using namespace std;

#include "child.h"

int main()
{
  Child child(33);   // Passed the parameter explicitly.
  child.print_var(); // Calls the method in Child.
  child.Parent::print_var();
  /*
    Calls the method in parent value in
    parent just contains junk or whatever in class
    initialization we did.

    In this it's going to hide the original m_value declared in parent class by
    the child class.
  */

  cout << "----------" << endl;
  child.show_values();
  return 0;
}