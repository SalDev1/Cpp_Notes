#include <concepts>
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
};

/*

//Concept 1 checking whether the number passed is an Integer or not.
// When the type trait returns true , concept is going to be satisifed.
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
requires MyIntegral<T>
T add(T a , T b){
    return a + b;
}

template <typename T>
concept Multipliable = requires(T a, T b)
{
    a *b; // Just makes sure the syntax is valid
};
*/

/*

// This is going to check for syntax.
template <typename T>
concept Incrementable = requires(T a)
{
    a += 1;
    ++a;
    a++;
};
*/

int main()
{
    return 0;
}
