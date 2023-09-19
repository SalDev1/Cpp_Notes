#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Math functions , you have learned about them in javascript or any programming language.
    cout << "Let's do this" << endl;

    double weight{7.7};
    double savings{5000};

    cout << "Weight rounded to the floor : " << floor(weight) << endl;
    cout << "Weight rounded to the ceil : " << ceil(weight) << endl;

    // Power Function
    cout << "The powered result is : " << pow(2, 3) << endl;

    // Absolute Funcion
    cout << "The abs of weight is : " << abs(weight) << endl;
    cout << "The abs of savings is : " << abs(savings) << endl;
    cout << "The exponent of 10 is : " << exp(10) << endl;

    // pow
    cout << "3 ^ 4 is : " << pow(3, 4) << endl;
    cout << "9 ^ 3 is : " << pow(9, 3) << endl;

    // log
    cout << "Log ; to get 54.59 , you would elevate e to the power of : " << log(54.59) << endl;
    cout << "To get 1000 , you'd need to elevate 10 to the power of : " << log10(10000) << endl;
    cout << "To get 8 , you'd need to elevate 2 to the power of : " << log2(8) << endl;

    cout << "The square root of 81 is : " << sqrt(81) << endl;

    cout << "3.654 rounded to : " << round(3.654) << endl;
    cout << "2.5 is rounded to : " << round(2.5) << endl;
    cout << "2.4 is rounded to : " << round(2.4) << endl;
}