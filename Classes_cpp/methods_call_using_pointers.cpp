#include <stdio.h>
#include <iostream>
using namespace std;

class Dog
{
private:
    string dog_name{};
    string dog_breed{};
    int *dog_age{nullptr};

public:
    Dog() = default;
    Dog(string name, string breed, int age)
    {
        dog_name = name;
        dog_breed = breed;
        dog_age = new int;
        *dog_age = age;
    }
    // Chained calls using references (&)
    Dog *set_dog_name(const char *name)
    {
        this->dog_name = name;
        return this; // Deference and return.
    }

    Dog *set_dog_breed(const char *breed)
    {
        this->dog_breed = breed;
        return this; // Deference the member variables.
    }
    Dog *set_dog_age(int age)
    {
        this->dog_age = new int;
        *dog_age = age;
        return this; // Memory address of the pointer.
    }
    void print_info()
    {
        cout << dog_name << endl;
        cout << dog_breed << endl;
        cout << *dog_age << endl;
    }
};

int main()
{
    // This program is making chained call using pointers.
    Dog *p_dog1 = new Dog("Milou", "Shepherd", 3);
    p_dog1->print_info();

    cout << endl;
    cout << "After chained call : " << endl;

    p_dog1->set_dog_name("Calibu")->set_dog_breed("Sheperd")->set_dog_age(19);
    p_dog1->print_info();

    delete p_dog1;
    return 0;
}