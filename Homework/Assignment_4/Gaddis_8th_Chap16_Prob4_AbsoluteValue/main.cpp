
/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 22, 2019, 4:28 PM
 * Purpose: Create template function absolute value
 */
#include <iostream>
#include <cmath>
using namespace std;

//**************************************************************
// Templates definitions                                       *
// absoluteValue template accepts one arguments and returns the*
// absolute value of the argument                              *
//**************************************************************
template <class T>
T absoluteValue(T num1)
{
    T newNum=abs(num1);
    return newNum;
}

//
//Design a simple driver program that
//demonstrates the templates with various data types.
int main()
{
    int inum1, inum2;
    double dnum1, dnum2;

    // Ask user to enter two negative integers
    cout << "Enter two negative integer values:\n";
    cin  >> inum1 >> inum2;
    
    // Call absoluteValue templates using integer data types
    cout << "Absolute value: " <<  absoluteValue(inum1) << endl;
    cout << "Absolute value: " << absoluteValue(inum2) << endl;

    // Ask user to enter two doubles
    cout << "Enter two negative float values:\n";
    cin  >> dnum1 >> dnum2;
    
    // Call absoulteValue templates using double data types
    cout << "Absolute value: " <<  absoluteValue(dnum1) << endl;
    cout << "Absolute value: " << absoluteValue(dnum2) << endl;
    return 0;
    
}