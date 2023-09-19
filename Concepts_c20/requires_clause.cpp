#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    /*
       The requires clause can take in four kinds of requirements :
          Simple requirements
          Nested Requirements
          Compound Requirements
          Type Requirements
    */

    /*
       //Simple requirement

       template <typename T>
       concept TinyType = requires(T t) {
           sizeof(T) <= 4;  //Simple requirement : Only checks syntax.
       }

       //Nested Requirement

       template <typename T>
       concept TinyType = requires(T t) {
           sizeof(T) <=4;  //Only checkes the syntax
           requires sizeof(T) <=4;  //Checks the if the expression is true.
       }

       //Compound Requirement

       template <typename T>
       concept Addable = requires(T a, T b) {
           //Syntax for a and b should be correct.
           // and result of a + b should be convert to int as well.

           {a+b}noexcept -> std::convertible_to<int>;
       }

       //Logical Combinations of concepts.
       //It is just using AND , OR logic to combine concepts
       template<typename T>

       T func(T t) requries std::integral <T>&& requires(T t) {
           sizeof(T) <=4;
           requires sizeof(T) <=4;
       }
    */
    return 0;
}