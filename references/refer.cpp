#include <iostream>
using namespace std;

int main()
{
   // Declaring and Using References.

   // Reference is an alias variable which you can use to reference the other variable.
   int int_value{45};
   double double_value{33.65};

   int &reference_to_int_value_1{int_value};  // Assign through out initialization
   int &reference_to_int_value_2 = int_value; // Assign through out assignment

   double &ref_double_value{double_value};

   cout << int_value << endl;
   cout << double_value << endl;
   cout << reference_to_int_value_1 << endl;
   cout << reference_to_int_value_2 << endl;
   cout << ref_double_value << endl;

   // Even the reference variable will be having the address.
   // Changes in the original variable will occur in the reference variable as well.

   cout << endl;
   cout << &int_value << endl;
   cout << &double_value << endl;
   cout << &reference_to_int_value_1 << endl;
   cout << &reference_to_int_value_2 << endl;
   cout << &ref_double_value << endl;

   // References
   /*
      Don't use dereferencing for reading and writing.
      Can't be changed to reference something else.
      Must be initialized at declaration.
   */

   // Pointers
   /*
      Must go through dereference operator to read/write through pointed to value
      Can be changed to point somewhere else
      Can be declared un-initialized (will contain garbage addresses)
   */

   double d_value{24};

   double &rf_d_value{d_value};   // Reference to original value
   double *ptr_d_value{&d_value}; // Pointer to the original value

   cout << endl;
   cout << d_value << endl;
   cout << rf_d_value << endl;
   cout << ptr_d_value << endl;
   cout << *ptr_d_value << endl;

   // Writing
   cout << endl;
   cout << "Writing through the pointer : " << endl;
   *ptr_d_value = 15.66;
   cout << *ptr_d_value << endl;

   cout << endl;
   cout << "Writing through the reference : " << endl;
   rf_d_value = 18.44;
   cout << rf_d_value << endl;

   // References are somewhat like const pointers.

   return 0;
}