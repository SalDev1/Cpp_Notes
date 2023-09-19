#include <concepts>
#include <iostream>
using namespace std;
// A mechanism to place constraints on your template type parameters.

// An alternative to static assests and type traits.
// Very similar to the normal template function.
// If someone violates our constraints , he/she will get the compile error.

auto add(std::integral auto a, std::integral auto b)
{
  return a + b;
}

template <typename T>
void print_number(T n)
{
  static_assert(is_integral<T>::value, "Must pass in an integral argument");
  cout << "n : " << n << endl;
}

int main()
{
  print_number(102);
  add(12, 23);

  return 0;
}

/*
  The function template will work if only the concept given here is satisfied.
  Concepts can help you enforce some strict rules for executing the function template.
*/

// Second syntax
//  template <std::integral T>
//  T add(T a, T b)
//  {
//      return a + b;
//  }

// Third Syntax
//  auto add(std::integral auto a, std::integral auto b)
//  {
//      return a + b;
//  }

// Fourth Syntax
// template <typename T>
// T add(T a, T b) requires std::integral<T>
// {
//     return a + b;
// }

/*
  Use the fucking documentation for this.
  The use of the concepts is such that adding constraints and conditions that the complier has to follow
  before executing the code in the function template.
*/