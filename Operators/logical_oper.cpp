#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if (a > b && a > c && a > d)
    {
        ans = a;
    }
    else if (b > c && b > d)
    {
        ans = b;
    }
    else if (c > d)
    {
        ans = c;
    }
    else
    {
        ans = d;
    }
    return ans;
}

int main()
{
    // Logical Operators ==> && , || , !
    // && == And Operator.
    // || == Or Operator.
    // ! = Not Operator.
    int a, b, c, d;
    cout << "Enter the four numbers : " << endl;
    cin >> a >> b >> c >> d;

    int ans = max_of_four(a, b, c, d);
    cout << "The max of the four numbers is : " << ans << endl;
}