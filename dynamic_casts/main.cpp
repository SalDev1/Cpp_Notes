#include <iostream>
using namespace std;

#include "animal.h"
#include "feline.h"
#include "dog.h"
/*
   Dynamic Casts helps us to do downstream transformations between
   our polymorphic types

   Using base pointers ==> we can call polymorphic or virtual functions.
   Sometimes we want to do much more than this.

   Transforming from base class pointer or reference to derived
   class pointer or reference, at run time.

   Makes it possible to call non polymorphic methods on derived
   objects.

   Jo methods polymorphic inhertiance mein nahi hai , so invoke karne ke liye we use
   dynamic casts.
*/

// Using base pointer
void do_something_with_animal_ptr(Animal *animal)
{
   cout << "In function taking base pointer .. " << endl;
   Feline *feline_ptr = dynamic_cast<Feline *>(animal);

   if (feline_ptr)
   {
      feline_ptr->do_some_feline_thingy();
   }

   else
   {
      cout << "Couldn't cast to Feline pointer , Sorry. " << endl;
   }
};

// Using base reference
void do_something_with_animal_ref(Animal &animal)
{
   cout << "In function taking base reference ... " << endl;
   Feline *feline_ptr_1 = dynamic_cast<Feline *>(&animal);
   if (feline_ptr_1)
   {
      feline_ptr_1->do_some_feline_thingy();
   }

   else
   {
      cout << "Couldn't cast to Feline pointer , Sorry. " << endl;
   }
}

int main()
{
   // Base class pointer
   Animal *animal1 = new Feline("stripes", "feline1");

   // Base class reference.
   Feline feline2("stripes", "feline2");
   Animal &animal_ref = feline2;

   // If the cast succeds , we get a valid pointer back,
   // if it fails , we get nullptr , So we can check before.
   // This helps us to invoke non virtual methods in the Feline.

   // We don't have a nullptr equivalent for references, so
   // there is no way to directly check the return value like we did
   // with pointers. But we can turn the reference into pointer and
   // then do the cast

   // Casting pointers.
   Feline *feline_ptr = dynamic_cast<Feline *>(animal1);
   if (feline_ptr)
   {
      feline_ptr->do_some_feline_thingy();
   }
   else
   {
      cout << "Couldn't cast to Feline pointer , Sorry. " << endl;
   }

   // Casting references. (Below method , not really recommended)
   Feline &feline_ref = dynamic_cast<Feline &>(animal_ref);
   feline_ref.do_some_feline_thingy();

   // Doing proper checks with references.
   // Coverting a base reference to the derived pointer.
   Feline *feline_ptr_1 = dynamic_cast<Feline *>(&animal_ref);
   if (feline_ptr_1)
   {
      feline_ptr_1->do_some_feline_thingy();
   }
   else
   {
      cout << "Couldn't cast to Feline reference , Sorry." << endl;
   }

   cout << "------------------------" << endl;
   Dog *feline_ptr_2 = dynamic_cast<Dog *>(animal1);
   // Converting a animal * to dog *, not accepted by the compiler.
   if (feline_ptr_2)
   {
      // Calling our derived non-polymorphic method.
      feline_ptr_2->do_some_feline_thingy();
   }
   else
   {
      cout << "Couldn't do the transformation from Animal* to Dog* ..." << endl;
   }

   // If we are transforming from our base class to a derived object , we will fail.
   // Casting usually done in functions.

   // It will fail , if we try to call a non-virtual method through a
   // base reference.

   cout << "----------------" << endl;
   do_something_with_animal_ptr(animal1);
   do_something_with_animal_ref(animal_ref);

   // int data{45};   //This will not work.
   // string str_data = dynamic_cast<string>(data);

   cout << "Done" << endl;
   cout << endl;

   delete animal1;

   // Use dynamic cast in inhertiance hierarchy that supports virtual functions.
   // This is the design purpose for the dynamic cast if you use this outside the context , the compiler will give you an error.

   return 0;
}