/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  write a class named DayOfYear that takes an integer
             representing a day of the year and translates it to a string
 *           consisting of the month
             followed by day of the month.
 */

//System Libraries
#include <iostream>

#include "DayOfYear.h"  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    DayOfYear date;
    
    date.getDate();
    
    //display results
    date.print();
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
