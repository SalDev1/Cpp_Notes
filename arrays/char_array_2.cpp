#include <iostream>
using namespace std;

int main()
{
    char message5[]{"Hello world , how are you doing!"};
    // An implicit '\0' character is appennded to the end of the string , making it a c string.
    // \0 is also being counted in the size of the message.
    cout << "The message is : " << message5 << endl;
    cout << "Size of message5 :" << sizeof(message5) << endl;

    // If a character array is null terminated , it's called as C-string.
    char message2[6]{'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message1 : " << message2 << endl;
    cout << "sizeof(message) : " << sizeof(message2) << endl;

    //  Character arrays are pretty special as you can directly print out the whole string.
    return 0;
}