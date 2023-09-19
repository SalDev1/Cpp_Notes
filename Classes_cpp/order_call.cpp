#include <iostream>
using namespace std;

class Dog
{
private:
    string name{};
    string breed{};
    int *age{nullptr};

public:
    Dog() = default;
    Dog(string name_param, string breed_param, int age_param);
    ~Dog(); // Destructor defined.
    // Destructors don't have any parameters.

    string get_dog_name();

    string get_dog_breed();

    int get_dog_age();
};

Dog::Dog(string name_param, string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    age = new int;
    *age = age_param;
    cout << "Dog constructor called for : " << name << endl;
}

Dog::~Dog()
{
    // Releasing memory as we are calling pointer.
    // Make sure to release memory after every use.
    delete age;
    cout << "Dog destructor called for : " << name << endl;
}

string Dog::get_dog_name()
{
    return name;
}
string Dog::get_dog_breed()
{
    return breed;
}
int Dog::get_dog_age()
{
    return *age;
}

int main()
{
    Dog d1("Doggy1", "Shepherd", 2);
    Dog d2("Doggy2", "Shepherd", 3);
    Dog d3("Doggy3", "Shepherd", 5);
    Dog d4("Doggy4", "Shepherd", 9);

    // All the pointers been called , destructizes themselves in the reverse order.

    /*
      The object which was created first may have some dependencies and you are going to delete the dependent objects first before
      you delete that object. That's why this is done in the reverse order.
    */
    return 0;
}