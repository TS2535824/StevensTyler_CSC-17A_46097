/* 
   File:   main
   Author: Tyler Stevens
   Created on June 19 2019
   Purpose:  Create a function that excepts a Fahrenheit measurement and convert it to Celsius
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formating
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void celsius(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float temp;
    
    //Input values
    cout<<"Enter Fahrenheit Temperature to be converted to Celsius: ";
    cin>>temp;
    
    //Display Output
    cout<<"Your result: ";
    cout<<temp<<" degrees F = ";
    celsius(temp)//call Celsius function
    cout<<" degrees C"<<endl;
    
    //display Fahrenheit temperatures ranging from 0 to 20
    cout<<"Range from 0 to 20 degrees F."<<endl;
    
    for(int i=0;i<20;i++){
        cout<<i<<" degrees F = ";
        celsius(i);//call Celsius function
        cout<<" degrees C"<<endl;
    }
    
    //Exit Program
    return 0;
}

//*****************************************************
// Definition of function Celsius. This function returns *
// the convert value of Fahrenheit to Celsius of         *
//*****************************************************
void celsius(float temp){
    
   //convert Fahrenheit to Celsius 
   temp=(5/9.0)*(temp-32);
   
   //format result to show decimal with one point precision 
   cout<<showpoint<<setprecision(1)<<fixed;
   
   //display result
   cout<<temp;
}