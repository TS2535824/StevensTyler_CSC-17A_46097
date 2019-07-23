/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  set member variable and display them
 */
#include "Personal.h"  // Needed for the Rectangle class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;


//**************************************************
//setName sets the value of the member variable name*
//**************************************************
void Personal::setName(std::string n){
    
    name=n;
    
}
//***********************************************************
//setAddress sets the value of the member variable address  *
//***********************************************************
void Personal::setAddress(std::string a){
    
    address=a;
    
}
//*************************************************
//setAge sets the value of the member variable age*
//*************************************************
void Personal::setAge(unsigned int a){
    
    age=a;
    
}
//********************************************************
//setNumber sets the value of the member variable number *
//********************************************************
void Personal::setNumber(unsigned int n){
    
    number=n;
    
}
void Personal::display(){
    
    //display output
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"number: "<<number<<endl;
  
}




