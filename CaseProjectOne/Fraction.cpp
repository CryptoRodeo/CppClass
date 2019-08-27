/* 
 * File:   Fraction.cpp
 * Author: bryan ramos
 * Assignment: Chapter 1 Case Project 1
 * Created on August 27, 2019, 1:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
/**
 * Fractional Structure
 * */
struct Fraction
{
    int numerator;
    int denominator;
};
int main(int argc, char** argv) {
    Fraction myFraction; //Declaration of the struct

    //Prompt and user input
    cout << "Enter the numerator of the fraction ";
    cin >> myFraction.numerator;
    cout << endl;
    cout << "Enter the denominator of the fraction ";
    cin >> myFraction.denominator;
    cout << "Here is your fraction" << endl;
    cout << endl;
    //Fraction printed
    cout << "" << myFraction.numerator << endl;
    cout << "-" << endl;
    cout << "" << myFraction.denominator << endl;
    return 0;
}

