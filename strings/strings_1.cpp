#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char message[] = {"Hello , I am Salman . I will be joining one of the Top 5 Companies soon."};
    // strlen:length of the string
    const char *message2{"The sky is blue."};

    cout << message << endl;
    cout << strlen(message) << endl; // The null character will also be included in this.

    cout << strlen(message2) << endl;
    cout << sizeof(message2) << endl;

    // Check if both the strings are same or not.
    cout << endl;
    const char *message3{"Alacama"};
    const char *message4{"Alabama"};

    // cout << strcmp(message3, message4) << endl;
    // Returns negative value if lhs appears before rhs in lexicographical order,
    // Zero if lhs and rhs compare equal.
    // and Positive value if lhs appears after rhs in lexicographical order.
    if (!strcmp(message3, message4))
    {
        cout << "The Two strings are same." << endl;
    }
    else
    {
        cout << "The two strings are not same." << endl;
    }

    return 0;
}