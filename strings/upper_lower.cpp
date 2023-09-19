#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    char thought[] = {"The C++ Programming Language is one of the most used on the Planet"};

    size_t upper_count{};
    size_t lower_count{};

    cout << endl;
    cout << "Original String : " << thought << endl;
    cout << endl;

    for (auto i : thought)
    {
        if (islower(i))
        {
            cout << " " << i;
            ++lower_count;
        }
        if (isupper(i))
        {
            ++upper_count;
        }
    }

    cout << endl;
    cout << "Found " << lower_count << " lowercase characters and uppercase count " << upper_count
         << " uppercase characters " << endl;

    cout << endl;
    char statement[]{"Mr Hamiliton owns 221 cows. That's a lot of cows! The kid exclamed."};
    size_t digit_count{};
    for (auto i : statement)
    {
        if (isdigit(i))
        {
            cout << "Found Digit : " << i << endl;
            ++digit_count;
        }
    }
    cout << "Found " << digit_count << " digits in the statement string" << endl;

    // To convert the statement in lowercase.
    char low_statement[sizeof(statement)];
    char upper_statement[sizeof(statement)];

    // Lower Case
    for (size_t i{}; i < sizeof(statement); i++)
    {
        low_statement[i] = tolower(statement[i]);
    }

    // Upper Case
    for (size_t i{}; i < sizeof(statement); i++)
    {
        upper_statement[i] = toupper(statement[i]);
    }

    cout << "Original String : " << statement << endl;
    cout << "Lowercase String : " << low_statement << endl;
    cout << "Uppercase String : " << upper_statement << endl;

    return 0;
}
