#include <iostream>
using namespace std;

// https://en.cppreference.com/w/cpp/io/manip

int main()
{
    // std::endl ==> Allows your text to show up on different lines.
    /* flush ==> causes immediate sending of data to the device connected to the stream.
       In this the text will not be display directly to the terminal,
       but it will be stored in the temporary buffer ==> then it goes to the terminal.
    */

    // std:setw() ==> setting the width of the selected text. (right and left justified)
    // std:internal ==> for handling negative numbers. //
    // std::setfill('-') ==> to fill the character.
    // std::boolalpha and noboolalpha.
    // std::showpos ==> showing positive signs for positive numbers.
    // std::hex , dec, oct
    // std::showbase to show the base of the output.
    // uppercase ==> to capitalize the words.
    // scientific , fixed ==> for handling the powers of 10.
    // showpoint ==> showing the decimal point.

    return 0;

    // ios, iomanip , limits libraries.
}