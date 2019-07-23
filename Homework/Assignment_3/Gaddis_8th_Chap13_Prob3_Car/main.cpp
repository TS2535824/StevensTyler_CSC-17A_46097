/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Create a car that speeds up and slows down
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
#include "Car.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
  
    //declare Variables
    Car car(2010,"Toyota");
    
    
    //speed up car
    for(int i=0;i<5;i++){
        car.accelerate();
    }
    
    //display speed
    cout<<car.getSpeed()<<endl;

    //use brakes
    for(int i=0;i<5;i++){
        car.brake();
    }
    
    //display speed
    cout<<car.getSpeed()<<endl;
    
    //Exit stage right or left!
    return 0;
}