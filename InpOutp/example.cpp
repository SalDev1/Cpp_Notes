#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Please enter your first name" << endl;
    // Taking the name from the user.
    cin >> name;

    cout << "Please enter your age" << endl;
    // Knowing the age of the user.
    cin >> age;

    cout << "Hello " << name << " You are " << age << " years old !" << endl;
}