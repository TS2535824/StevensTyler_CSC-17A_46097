/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Display a date in three different forms
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include "Date.h"
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int d,m,y;
    
    //Input Variables
    cout<<"Enter day: ";
    cin>>d;
    cout<<"Enter month: ";
    cin>>m;
    cout<<"Enter year: ";
    cin>>y;
    
    //Create Date object
    Date calendar;
    
    //Set member variables
    calendar.setDay(d);
    calendar.setMonth(m);
    calendar.setYear(y);
    
    //Display output
    calendar.display1();
    calendar.display2();
    calendar.display3();

    //Exit stage right or left!
    return 0;
}