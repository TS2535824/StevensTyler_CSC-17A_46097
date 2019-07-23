#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

//
//Default constructor
//
 Employee::Employee(){
    cout<<"A"<<endl;
}

 //**********************************************************************
 //Constructor sets values for member functions name, date hired and num*
 //**********************************************************************
Employee::Employee(string nm,string date,int n){
    name=nm;
    dateHired=date;
    num=n;
}

//*****************************************************
//setName() sets the value of the member function name*
//*****************************************************
void Employee::setName(string n){
    name=n;
   
    
}
//***************************************************************
//setDateHired() sets the value of the member function DateHired*
//***************************************************************
void Employee::setDateHired(string d){
    dateHired=d;
}
//*************************************************
//setNum sets the value of the member function num*
//*************************************************
void Employee::setNum(int n){
    num=n;
}

