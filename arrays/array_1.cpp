#include <iostream>
using namespace std;

int main()
{
    int scores[10];
    cout << endl;
    cout << "Writing data in array with loops" << endl;

    // Inserting elements into the array.
    for (size_t i{0}; i < 10; ++i)
    {
        scores[i] = i * 3;
    }
    // Print the elements from the array.
    for (size_t i{0}; i < 10; ++i)
    {
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }
    // Lot's of programs running on our OS . We can quickly run out of memory.
    /*If we are using the real memory , every single time.*/

    /*
      Virtual Memory :- A trick that fools your program into thinking it is the only program
      running on your OS , and all memory resources belong to it.

      Each program is abstracted into a process, and each process has access to the
      memory range 0 ~ (2^N)-1 where N is 32 on 32 bit systems and 64 on 64 bit systems.

      If we run the program it will be going through the memory management unit.

      The entire program is not loaded in real memory by the CPU and
      MMU. Only parts that are about to be executed are loaded. Making
      effective use of real memory, a valuable and lacking resource.

      In MMU , it will assign sections on the real ram we have in our computer.
      System ==> Stack ==> Heap ==> Data ==>Text

      Do the proper initialization of the pointer , initialize your pointer with null pointer.
    */
}