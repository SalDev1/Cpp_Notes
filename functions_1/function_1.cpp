#include <iostream>
using namespace std;

int addnumbers(int a, int b)
{
    return a + b;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Example of a simple function
void enter_bar(unsigned int age)
{
    if (age > 18)
    {
        cout << "You are " << age << " years old . Please Proceed." << endl;
    }
    else
    {
        cout << "Sorry , you are too young for this. No offense!" << endl;
    }
}

int main()
{
    // Functions , we alreaady know how functions works.
    // Take it as a revision.
    // Void == doesn't take any input , and doesn't return any output value as well.
    // We use functions so are code looks cleaner and readable.
    // It also helps us to carry out repertitive tasks for us to conduct , instead of carrying and writing same code again and again.
    int a = 20;
    int b = 10;

    cout << "Numbers before swapping : " << a << "," << b << endl;
    swap(&a, &b); // This is what a function looks like.
    addnumbers(a, b);
    addnumbers(a, b);
    cout << "Numbers after swapping : " << a << "," << b << endl;
    cout << "Numbers after swapping : " << a << "," << b << endl;

    // Hello there , I am Salman. I am 20 years old. I don't really give up , no matter what it takes to be champion. I WILL NOT GIVE UP.
    cout << endl;
    cout << "Using the enter_bar function : " << endl;
    enter_bar(18);
    enter_bar(23);

    // let's go buddy , you can do this.
    // for (size_t i{0}; i < 20; i++)
    // {
    //     enter_bar(i);
    // }

    return 0;
}