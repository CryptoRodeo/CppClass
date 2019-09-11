/* 
 * File:  Fraction.cpp
 * Author: Bryan Ramos
 * Assignment: Chapter 2 Case Project 1
 * Created on September 11, 2019 
 */

#include <cstdlib>
#include <iostream>

using namespace std;


/**
 * Fraction Structure
 * */
struct Fraction
{
    int numerator;
    int denominator;
};


//Function prototypes
void printFraction(Fraction f1);
void displayFloatingPointEquivalent(int numerator, int denominator);
Fraction fractionSum( Fraction f1, Fraction f2);
void addValues(Fraction& f1);

int main(int argc, char** argv) {
    
    Fraction f1; //Declaration of the structs
    Fraction f2;
    Fraction f3;
    
    //Adding values through user input
    addValues(f1);
    addValues(f2);
    
    //Floating point equivalent
    //
    cout << "Fractional value is" << endl;
    displayFloatingPointEquivalent(f1.numerator, f1.denominator);
   
    //Spacing for cleaner output 
    cout << endl;
    
    //Get sum of fractions
    cout << "Now adding" << endl;
    printFraction(f1);
    cout << "with" << endl;
    printFraction(f2);
    
    //f3 is (f1 + f2)
    f3 = fractionSum(f1, f2);

    cout << "Result" << endl;
    printFraction(f3);

    return 0;
}

//This function prints the fraction in a vertical format
void printFraction(Fraction f1)
{
    cout << "" << f1.numerator << endl;
    cout << "-" << endl;
    cout << "" << f1.denominator << endl;
}

//This function returns the floating point number equivalent of the fraction
void displayFloatingPointEquivalent(int numerator, int denominator)
{
    cout << (float)(numerator) / (float)(denominator) << endl;
}


//This function returns the sum of 2 fractions
Fraction fractionSum( Fraction f1, Fraction f2)
{
    Fraction sum;
    int tempDenominator=f1.denominator;
    
    f1.numerator *= f2.denominator;
    f1.denominator *= f2.denominator;

    f2.numerator *= tempDenominator;
    f2.denominator *= tempDenominator;
    
    sum.numerator = (f1.numerator + f2.numerator);
    sum.denominator = (f2.denominator);
    
    return sum;    
}


//This function takes structs by reference, appends their values through user input
void addValues(Fraction& f1)
{
   //Prompt and user input
    cout << "Enter the numerator of the fraction ";
    cin >> f1.numerator; //append value
    cout << endl;
    cout << "Enter the denominator of the fraction ";
    cin >> f1.denominator; //append value
    cout <<  endl; //Extra space for formatting
 
}
