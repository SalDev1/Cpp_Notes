#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    cout << endl;

    // String Concentation.
    string a = "Salman";
    string b = "Uddin";

    string c = a + " " + b;

    cout << c << endl;

    // OR
    char message[] = "This is awesome";
    char message_1[] = " This is bullshit";

    cout << endl;

    strcat(message, message_1);
    cout << message << endl;
    strcat(message, " GoodBye World ");
    cout << message << endl;

    // Copying the old string into a new one.
    cout << endl;
    const char *source = "C++ is a multipurpose programming language.";
    char *dest_3 = new char[strlen(source) + 1];

    strcpy(dest_3, source);
    cout << dest_3 << endl;
    strcpy(dest_3, "Hello Everyone.");
    cout << dest_3 << endl;

    return 0;
}