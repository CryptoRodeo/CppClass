#include<iostream>
// Using arithmetic expressions
// Note that a, b, c, and so on are not very
// descriptive variable names
// They are used here simply to hold values
using namespace std;
int main()
{
    int a = 2, b = 4, c = 10, intResult;
    double d = 2.0, e = 4.4, f = 12.8, doubleResult;
    float g = 2.0f, h = 4.4f, i = 12.8f, floatResult;
    intResult = a + b;
    cout << intResult << endl;
    // result is 6, an int
    // because both operands are int
    intResult = a * b;
    cout << intResult << endl;
    // result is 8, an int
    // because both operands are int
    intResult = c / a;
    cout << intResult << endl;
    // result is 5, an int
    // because both operands are int
}
