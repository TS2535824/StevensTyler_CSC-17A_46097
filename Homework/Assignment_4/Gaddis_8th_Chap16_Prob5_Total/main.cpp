
/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 22, 2019, 4:28 PM
 * Purpose: Create template function Total
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
T Total(T num1,T num2)
{
    
    return num1+num2;
}

//
//Design a simple driver program that
//demonstrates the templates with various data types.
int main()
{
    int inum1, inum2;
    double dnum1, dnum2;

    // Ask user to enter two negative integers
    cout << "Enter two integer values:\n";
    cin  >> inum1 >> inum2;
    
    // Call absoluteValue templates using integer data types
    cout << "Total: " <<  Total(inum1,inum2) << endl;
    

    // Ask user to enter two doubles
    cout << "Enter two negative float values:\n";
    cin  >> dnum1 >> dnum2;
    
    // Call absoulteValue templates using double data types
    cout << "Total: " <<  Total(dnum1,dnum2) << endl;
   
    return 0;
    
}