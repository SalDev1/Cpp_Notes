#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Find the first occurance of the character.

    const char *str{"Try not . Do , or do not . There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while ((result = strchr(result, target)) != nullptr)
    {
        cout << "Found " << target << " starting at " << result << '\n';

        result++;
        iterations++;
    }
    cout << "iterations : " << iterations << endl;

    // Find the last occurance
    cout << endl;
    char input[] = "/home/user/hello.cpp";
    // In this , we are going to hunt down for the file name.
    char *output = strrchr(input, '/');

    if (output)
        cout << output + 1 << endl;

    return 0;
}