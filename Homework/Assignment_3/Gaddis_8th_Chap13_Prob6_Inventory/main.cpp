/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
#include "Invetory.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    Invetory test1; 
     
    
   //int i,int q,float c,float t) 
    Invetory test2(7,12,12.50);
    cout<<"--------------Default---------------------"<<endl;
    cout<<"Item number: "<<test1.getItemNumber()<<"\nQuantity: "<<test1.getQuantity()<<"\nCost: "<<test1.getCost()<<"\nTotal Cost: "<<test1.getTotalCost()<<endl;
    cout<<"--------------Blue Letter-----------------"<<endl;
    cout<<"Item number: "<<test2.getItemNumber()<<"\nQuantity: "<<test2.getQuantity()<<"\nCost: "<<test2.getCost()<<"\nTotal Cost: "<<test2.getTotalCost()<<endl;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}