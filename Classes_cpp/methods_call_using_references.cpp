#include <iostream>
using namespace std;

class Dog
{
private:
    string dog_name;
    string dog_breed;
    int *dog_age{nullptr};

public:
    Dog() = default;
    Dog(string name_param, string breed_param, int age_param);
    ~Dog();

    Dog &set_dog_name(string name)
    {
        this->dog_name = name;
        return *this;
        // Take the name variable of the current object and assign the name in the name parameter
        // to that.
    }

    Dog &set_dog_breed(string breed)
    {
        this->dog_breed = breed;
        return *this;
    }

    Dog &set_dog_age(int age)
    {
        this->dog_age = new int;
        *dog_age = age;
        return *this;
    }

    void print_info()
    {
        cout << dog_name << endl;
        cout << dog_breed << endl;
        cout << *dog_age << endl;
    }
};

Dog::Dog(string name_param, string breed_param, int age_param)
{
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int;
    *dog_age = age_param;
    cout << "Dog constructor called for " << dog_name << " at " << this << endl;
}

Dog::~Dog()
{
    delete dog_age; // Releasing memory back to the heap.
    cout << "Dog destructor called for " << dog_name << "at" << this << endl;
}

int main()
{
    // Chained Calls by reference.
    Dog *p_dog1 = new Dog("Salman", "Husky", 9);
    p_dog1->print_info();

    // cout << endl;
    // cout << "After chaining reference call : " << endl;

    // p_dog1->set_dog_name("Tom").set_dog_breed("Pomerian").set_dog_age(6);

    // p_dog1->print_info();

    cout << endl;
    cout << "Done" << endl;

    return 0;
}