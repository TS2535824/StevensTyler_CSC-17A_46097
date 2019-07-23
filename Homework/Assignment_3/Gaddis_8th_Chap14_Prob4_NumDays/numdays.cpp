/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on November 16th, 2017, 12:00 PM
 * Purpose: Number Days Class
 */

#include <iostream>
#include "numdays.h"
using namespace std;

//***************************************************************
//Numdays is a default constructor that sets member variable hrs*
//and days equal to zero.                                       *
//***************************************************************
NumDays::NumDays(){
    hrs=0;
    days=0;
}
//***************************************
//print displays hours and days         *
//***************************************
void NumDays::print(){
    cout<<"Enter Hours Worked: ";
    cin>>hrs;
    days=hrs/8;
    cout<<"Days: "<<days<<endl;
}
NumDays NumDays::operator+(){
    NumDays newN;
    newN.days=days+hrs;
    cout<<"Overloaded Operator + : "<<newN.days<<endl;
}

NumDays NumDays::operator-(){
    NumDays newN;
    newN.days=days-hrs;
    cout<<"Overloaded Operator - : "<<newN.days<<endl;
}

NumDays NumDays::operator++(){
    NumDays newN;
    newN.days+=days+hrs;
    cout<<"Overloaded Operator ++ : "<<newN.days<<endl;
}

NumDays NumDays::operator--(){
    NumDays newN;
    newN.days-=days-hrs;
    cout<<"Overloaded Operator -- : "<<newN.days<<endl;
}