#include <iostream>
using namespace std;

void age(int age);

// Call by value function.
int main()
{
    int a{23};

    cout << "Before your age :" << a << " , &a : " << &a << endl;
    age(a);
    cout << "After your age : " << a << " , &a : " << &a << endl;

    return 0;
}

void age(int age)
{
    ++age;
    cout << "Hello there , you are " << age << " years old." << endl;
}

/* Keep up the discipline and consistency , you can do this , never give up*/