/* 
 * File:   Car.cpp
 * Author: Tyler Stevens
 * Created on July 18, 2019, 7:58 PM
 * Purpose  Create a car
 */

#include "Car.h"
using namespace std;


//*********************************************************************
//Car constructor assigns values to member function yearModel and make*
//*********************************************************************
Car::Car(int y, std::string m){
    yearModel=y;
    make=m;
    speed=0;
}   
//***********************************************
//accelerate adds 5 to the speed member function*
//***********************************************
void Car::accelerate(){
    speed+=5;
} 
//*************************************************
//brake subtracts 5 from the speed member function*
//*************************************************
void Car::brake(){
    speed-=5;
} 

