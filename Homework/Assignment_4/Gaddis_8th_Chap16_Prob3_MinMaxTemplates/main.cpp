
/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 22, 2019, 4:28 PM
 * Purpose: Create template function min and max
 */
#include <iostream>
using namespace std;

//***********************************************************
// Templates definitions                                    *
// Min template accepts two arguments and returns the       *
// value of the argumet that is the lesser of the two.      *
//***********************************************************
template <class T>
T Min(T num1, T num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}
//**********************************************************
// Max template accepts two arguments and returns the      *
// value of the argumet that is the greater of the two.    *
//**********************************************************
template <class T>
T Max(T num1, T num2)
{
    if (num1 > num2)
            return num1;
    else
            return num2;
}
//
//Design a simple driver program that
//demonstrates the templates with various data types.
int main()
{
    int inum1, inum2, result;
    double dnum1, dnum2;

    // Ask user to enter two integers
    cout << "Enter two integer values:\n";
    cin  >> inum1 >> inum2;
    // Call min and max templates using integer data types
    cout << "Min: " <<  Min(inum1, inum2) << endl;
    cout << "Max: " << Max(inum1, inum2) << endl;

    // Ask user to enter two doubles
    cout << "Enter two float values:\n";
    cin  >> dnum1 >> dnum2;
    
    // Call min and max templates using double data types
    cout << "Min: " << Min(dnum1, dnum2) << endl;
    cout << "Max: " << Max(dnum1, dnum2) << endl;

    return 0;
}