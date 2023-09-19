#include <iostream>
using namespace std;

int main()
{
    int number_1 = 90;
    int number_2 = 45;

    int addTwoNumbers{number_1 + number_2};
    int subtractTwoNumbers{number_1 - number_2};
    int multiply{number_1 * number_2};
    int modulusOp{number_1 % number_2};
    int divisionOp{number_1 / number_2};
    // Capturing the remainder of the operation.

    cout << addTwoNumbers << endl;
    cout << subtractTwoNumbers << endl;
    cout << multiply << endl;
    cout << modulusOp << endl;

    // Precedence == which operation to do first.
    // Associativity == which direction or which order.
}