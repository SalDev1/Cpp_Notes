#include <iostream>
#include "Calculator.h"

Calculator::Calculator()
{
    a = 0;
    b = 0;
}
Calculator::Calculator(int c, int d)
{
    a = c;
    b = d;
}
int Calculator::op()
{
    return a * b;
}