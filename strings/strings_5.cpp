#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    string full_name = "Mohammed Salmanuddin";
    string planet{"Earth , Where the sky is blue."};
    string preferred_planet = planet;
    string message = "Hello World!";

    cout << planet << endl;
    cout << full_name.size() << endl; // Doesn't include the null character.
    cout << preferred_planet << endl;
    cout << message << endl;

    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    cout << planet << endl;

    // Use a raw array, we use string for not wasting the memory to initialize like that below.
    const char *planet{"Earth . Where the sky is blue "};

    // One definition Rule
    // Definitions can't show up more than once in entire program or
    // Translation units.

    // For this we have:-
    // Free standing variables , Functions , Classes , Class Member functions,
    // Class Static member variables.
}