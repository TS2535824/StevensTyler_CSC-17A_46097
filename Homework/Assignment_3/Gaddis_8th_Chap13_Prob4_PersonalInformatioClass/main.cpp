/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Create a program with a class that hold information of three 
 *           separate people.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstring>
#include <string>
using namespace std;

//User Libraries
#include "Personal.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    std::string x;
    unsigned int y;
    Personal me,friend1,friend2;
    
    //Input my personal info
    x="Tyler Stevens";
    me.setName(x);
    x="1000 dream lane";
    me.setAddress(x);
    y=23;
    me.setAge(y);
    y=1234567;
   // me.setNumber(y);
    
    //Input friend ones personal info
    x="stinky face";
    friend1.setName(x);
    x="300 Yes drive";
    friend1.setAddress(x);
    y=100;
    friend1.setAge(y);
    y=56789012;
    friend1.setNumber(y);
    
    //Input friend twos personal info
    x="Ash Catch";
    friend2.setName(x);
    x="200 nowhere street";
    friend2.setAddress(x);
    y=12;
    friend2.setAge(y);
    y=8901234;
    friend2.setNumber(y);
    
    //Display each objects information
    me.display();
    friend1.display();
    friend2.display();

    //Exit stage right or left!
    return 0;
}