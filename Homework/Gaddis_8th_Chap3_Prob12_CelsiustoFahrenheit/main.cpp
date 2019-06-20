/* 
   File:   main
   Author: Tyler Stevens
   Created on June 18 2019
   Purpose:  convert from Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>     //Formatting Output
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float c;
    
    //Input values
    cout<<"Enter a temperature in Celsius "<<endl;
    cin>>c;
    
    //Process values -> Map inputs to Outputs
    float f=9/5.0*c+32;
    
    //Display Output
    cout<<showpoint<<setprecision(2)<<fixed<<endl;
    cout<<"The Fahrenheit equivalent is "<<f<<endl;

    //Exit Program
    return 0;
}

