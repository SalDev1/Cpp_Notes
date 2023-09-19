#include <iostream>
using namespace std;

class Person
{
private:
    // Member variables
    string name{};
    int age{};

public:
    // Default Constructor.
    Person()
    {
        name = "Simu";
        age = 26;
    }
    // Parameterized Constructor.
    // Pass by value parameters.

    Person(string name_param, int age_param)
    {
        name = name_param;
        age = age_param;
    }
    // Function (Methods)
    void print_name()
    {
        cout << "Hello there , my name is " << name << endl;
    }

    void print_age()
    {
        cout << "Hello there , my name is " << age << endl;
    }
};

int main()
{
    Person person1("Salman", 25); // Object created from the class.
    // The complier will check for the constructor in the class , if it founds one,
    //  it uses the information in the constructor to show output in the terminal.
    person1.print_name();
    person1.print_age();
    return 0;
}

/*
  A special kind of method that is called when an instance of a class is created.
     No return type
     Same name as the class
     Can have parameters . Can also have an empty parameter list.
     Usually used to initialize member variables of a class.

     Even if we don't declare any constructors in the class , the complier will
     create it's own empty constructor by itself.

     //You can call the default constructor by using keyword default.
*/