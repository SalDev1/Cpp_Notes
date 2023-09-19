#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Please enter your first name and age , separated by spaces: " << endl;
    cin >> name >> age;

    cout << "Hello " << name << " You are " << age << " years old !" << endl;
}