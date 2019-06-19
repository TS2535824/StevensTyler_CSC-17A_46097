/* 
   File:   main
   Author: Tyler Stevens
   Created on June 18 2019
   Purpose: Convert USD to JPY and EUR
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting Output
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //constants for JPY and EUR
    const float YEN_PER_DOLLAR=108.46;
    const float EUROS_PER_DOLLAR=0.89;
    
    //Declaration of Variables
    float usd,eur,jpy;
    
    //Input values
    cout<<"Enter USD amount: ";
    cin>>usd;
    
    //Process values -> Map inputs to Outputs
    eur=usd*EUROS_PER_DOLLAR;
    jpy=usd*YEN_PER_DOLLAR;
    
    //Display Output
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<usd<<" U.S dollars is equivalent to "<<eur<<" Euros. \n";
    cout<<usd<<" U.S dollars is equivalent to "<<jpy<<" Japanese Yen. \n";
    
    //Exit Program
    return 0;
}