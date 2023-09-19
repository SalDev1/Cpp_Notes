#include <iostream>
using namespace std;

/*
  Each class member contains a hidden pointer called this.
  That pointer contains the address of the current object,
  for which the method is being executed . This also applies
  to constructors and destructors.
*/
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

    void set_dog_name(string &dog_name);
};

// Setting up the dog name using this pointer.
// Mainly use the this-pointer for assiging new values to the member variables
// and also when working with pointers.
void Dog::set_dog_name(string &dog_name)
{
    this->name = dog_name;
}

int main()
{
    return 0;
}