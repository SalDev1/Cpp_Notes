#ifndef CALCULATOR_H_CAL
#define CALCULATOR_H_CAL
class Calculator
{
    int a, b;

public:
    Calculator();
    Calculator(int, int);
    int op();
};
#endif

// Calculator::Calculator()
// {
//     a = 0;
//     b = 0;
// }
// Calculator::Calculator(int c, int d)
// {
//     a = c;
//     b = d;
// }
// int Calculator::op()
// {
//     return a * b;
// }