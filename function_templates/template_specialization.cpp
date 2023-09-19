#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
T maximum(T a, T b);

// Template Specialization.
template <>
const char *maximum<const char *>(const char *a, const char *b);

int main()
{
    int a{10};
    int b{20};

    double c{23.09};
    double d{83.43};

    /*
      Normal Strings works perfectly for comparing strings using lexographical orders.
      To solve problem of const char * , we make use of template specialization to show result
      based on lexographical order.
    */

    string e = "Hello";
    string f = "World";

    // In order to handle the below cases , we make use of the template specialization.
    const char *g{"wild"};
    const char *h{"animal"};

    // Comparing the two strings using lexographical order.
    auto max_1 = maximum(a, b);
    auto max_2 = maximum(c, d);
    auto max_str = maximum(e, f);

    cout << max_1 << endl;
    cout << max_2 << endl;
    cout << max_str << endl; // This gives you result that compare pointers directly.

    // Now it is able to compare strings based on lexographical order
    // by taking the first letter from both strings.
    auto max_char_str = maximum(g, h);
    cout << max_char_str << endl;

    return 0;
}

// Specializing maximum for const char.
// We are trying comparing two strings in a lexographical order.
template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

// This is an overload or specialization of the main function.
template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    // We are making comparsions by the lexographical order.
    return (strcmp(a, b) > 0) ? a : b;
}
