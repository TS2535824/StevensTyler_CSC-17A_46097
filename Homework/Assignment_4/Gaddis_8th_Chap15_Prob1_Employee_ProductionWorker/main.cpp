    
/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 21 2019
 * Purpose:  Use inheritance to set information about an employee
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
#include "ProductionWorker.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //set values for  object
    ProductionWorker some1(1,12,"Tyler","July 22 2019",1234);
    
    //display result
    cout<<"Namw: "<<some1.getName()<<endl;
    cout<<"Date hired "<<some1.getDateHired()<<endl;
    cout<<"Employee number: "<<some1.getNum()<<endl;
    if(some1.getShift()==1)
        cout<<"Date shift"<<endl;
    else
        cout<<"Night Shift"<<endl;
    cout<<"Hours worked: "<<some1.getHours()<<endl;
    

    return 0;
}

