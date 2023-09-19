#include <iostream>
using namespace std;

int main()
{
    // int *data = new int[5];
    // int length = sizeof(data) / sizeof(data[0]);

    // for (int i = 0; i <= length - 1; i++)
    // {
    //     data[i] = i * 3;
    // }

    // for (int i = 0; i <= length - 1; ++i)
    // {
    //     cout << data[i] << endl;
    // }
    for (size_t i{0}; i < 100; i++)
    {
        try
        {
            int *data = new int[10000];
        }
        catch (exception &ex)
        {
            cout << "Something went wrong : " << ex.what() << endl;
        }
    }

    cout << "Program is running successfully" << endl;

    // std::nothrow()
    for (size_t i{0}; i < 100; ++i)
    {
        int *data = new (nothrow) int[1000000000];
        if (data != nullptr)
        {
            cout << "Data Allocated" << endl;
        }
        else
        {
            cout << "Data allocation failed" << endl;
        }
    }

    return 0;
}