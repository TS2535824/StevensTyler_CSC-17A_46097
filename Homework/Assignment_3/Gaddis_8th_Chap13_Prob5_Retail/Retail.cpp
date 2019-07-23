/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  set member variable and display them
 */
#include "Retail.h"
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
#include <string>
using namespace std;


//**************************************************************
//Retail sets the value of the member variable name all at once*
//**************************************************************
Retail::Retail(std::string d,int a,float p){
    
    descrip=d;
    unitsOnHand=a;
    price=p;
    
}

//**********************************************************
//setName sets the value of the member variable description*
//**********************************************************
void Retail::setDescrip(std::string n){
    
    descrip=n;
    
}
//***********************************************************
//setUnits sets the value of the member variable unitsOnHand*
//***********************************************************
void Retail::setUnits(int a){
    
    unitsOnHand==a;
    
}
//***********************************************************
//setPrice sets the value of the member variable price      *
//***********************************************************
void Retail::setPrice(float p){
    
    price=p;
    
}
