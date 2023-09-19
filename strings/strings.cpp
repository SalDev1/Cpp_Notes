#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // Character Manipulation.
    // For characters only , not strings.
    char name = toupper('c');
    cout << name << endl;
    // Basic facilities to handle text data in your C++ program.

    // Check the character is alphanumberic.
    cout << endl;
    cout << isalnum('C') << endl;
    cout << isalnum('9') << endl; // Returns a non-zero alphanumberic character.
    char input_char{'p'};

    cout << endl;
    if (isalnum(input_char))
    {
        cout << "The given character is alphanumberic in nature." << endl;
    }
    else
    {
        cout << "The given character is not alphanumberic in nature." << endl;
    }

    // If the character is alphabetic in nature.
    cout << endl;
    cout << "isalpha() : " << endl;
    cout << "C is alphabetic : " << isalpha('C') << endl;
    cout << "7 is alphabetic : " << isalpha(10) << endl;
    cout << "^ is alphabetic : " << isalpha('^') << endl;

    // Check if a character is blank.
    cout << "isblank :" << endl;
    char message[] = {"Hello There. How are you doing? The sun is shining."};

    int blank_count = 0;
    for (size_t i{0}; i < sizeof(message); i++)
    {
        if (isblank(message[i]))
        {
            cout << "Found a blank character at index : [" << i << "]" << endl;
            ++blank_count;
        }
    }

    cout << "In total we found " << blank_count << " blank characters." << endl;

    return 0;
}