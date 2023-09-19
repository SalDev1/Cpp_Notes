#include <iostream> /*Standard library feature*/
using namespace std;

int main()
{
    // Reading data with spaces
    // This helps us to add more words for a single variable (full_name)
    int age;
    string full_name;

    cout << "Please type in your full name: " << endl;
    getline(cin, full_name);

    cout << "Type in your age : " << endl;
    cin >> age;
    cout << "Hello " << full_name << " You are " << age << " years old !" << endl;
}
/*Any program that passes through the complier is been converted into the binary format
 and this binary file is loaded up in the memory and ready to be executed by CPU ,
 statement by statement
*/

/* STL == can be considered as collection of things or
set of types to store collections */

// STL == Highly specialized part of the C++ library