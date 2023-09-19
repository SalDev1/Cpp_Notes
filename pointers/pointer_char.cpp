#include <iostream>
using namespace std;

int main()
{
    // Declaring pointers to char.
    char *ptr_char_var{nullptr};
    char char_var{'A'};

    ptr_char_var = &char_var;

    cout << "The value stored in p_char_var is : " << *ptr_char_var << endl;

    char char_var1{'B'};
    ptr_char_var = &char_var1;

    cout << "The value stored in p_char_var is : " << *ptr_char_var << endl;

    return 0;
}