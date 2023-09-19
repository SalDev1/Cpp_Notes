#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char dest_2[50] = {"Hello"};
    char source_2[50] = {" There is a bird on my window."};

    // It takes the first six characters from the source_2 string and concats with dest_2
    cout << strncat(dest_2, source_2, 6) << endl;

    strncat(dest_2, source_2, 6);
    cout << "Concentated string is : " << dest_2 << endl;

    return 0;
}
