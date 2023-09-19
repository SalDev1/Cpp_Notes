#include <iostream>
using namespace std;

// Spilting the function into two parts:- Declaration and Definition.

// Function Declaration
int max(int a, int b); // Prototype
int min(int a, int b);
int inc_mult(int a, int b);
/*
   The full function definition coming in front of main() also doubles as a prototype(declaration).
   That's why the code in the last lecture worked without any problem
*/
int main()
{
    // Separating stuff
    // Sometimes it's more flexible to split the function into it's header and body and
    // keep the code for each in different places.

    // The prototype needs to come BEFORE the function call in your file.
    // Otherwise the compilation will fail.

    int x{12};
    int y{9};

    int result{};

    result = max(x, y);
    cout << "result : " << result << endl;

    result = inc_mult(x, y);
    cout << "result : " << result << endl;

    result = min(x, y);
    cout << "result : " << result << endl;

    return 0;
}

// Function defintion or implementation.
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int inc_mult(int a, int b)
{
    return ((++a) * (++b));
}

// Preprocessing Stage :- It takes the include libraries in your code and replace with the content in iostream library.

// COMPLIER GENERATES AN OBJECT OR BINARY FILE.

// Preprocessor ==> TU ===> Complition ==> Object or Binary Files ==> Linker.

/*
   Linker is going to stitch them (object files) together in a single binary file out of all these object files
   This is act as a binary that we can run on our target operation system.
*/
