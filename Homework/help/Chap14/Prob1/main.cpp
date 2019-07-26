/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 21 2019
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>

#include "numbers.h"  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num;
    
    cout<<"number between 0 and 9999: ";
    cin>>num;
    
    numbers Number(num);
    
    Number.print();

    //Exit stage right or left!
    return 0;
}