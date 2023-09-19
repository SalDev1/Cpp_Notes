#include <iostream>
using namespace std;

/*
  Destructors.
  Special methods that are called when an object dies. They are
  needed when the object needs to release some dynamic memory , or
  for some other kind of clean up.
*/

// You can put these headers in different contents in different header files as well.

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

// Releasing the memory.
Dog::~Dog()
{
    // Releasing memory as we are calling pointer.
    // Make sure to release memory after every use.
    delete age;
    cout << "Dog destructor called for : " << name << endl;
}

void some_func()
{
    Dog *p_dog = new Dog("Fluffy", "Shepherd", 2);
    delete p_dog;
}

int main()
{
    Dog *d1 = new Dog("Tommy", "Husky", 18);

    some_func();
    // This shows that the destructor works pretty good.

    // cout << d1->get_dog_age() << endl;
    // cout << d1->get_dog_breed() << endl;
    // cout << d1->get_dog_name() << endl;

    cout << "Done" << endl;

    return 0;
}

/*
 If you pass a class object by value , the copy you have inside is the cause of the destructor
 to be called when the function exits. Cause the copy is going to scope inside the function.

 If we don't explicitly release our memory through our object , there is a chance
 of memory leak.

 The destructors are called in weird places that may not be obvious
        when an object is passed by value to a function
        When a local object is returned from a function
        (for some compilers).
 Other obvious cases are :
       When a local stack object goes out of scope (dies)
       when a heap object is released with delete.
*/