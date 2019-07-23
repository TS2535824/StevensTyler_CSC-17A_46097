/* 
 * File:   ProductionWorker.cpp
 * Author: Tyler Stevens
 * Created on July 21, 2019, 7:21 PM
 * Purpose 
 */

#include "ProductionWorker.h"

//
//Default constructor
//
ProductionWorker::ProductionWorker():Employee() {
    
    cout<<"B"<<endl;
    
}
 //**********************************************************************
 //Constructor sets values for member functions hours and shift         *
 //**********************************************************************
ProductionWorker::ProductionWorker(int sh,float hrs, string nme,string date,int num):Employee(nme,date,num){
    hours=hrs;
    shift=sh;
    
}
//*****************************************************
//setHours() sets the value of the member function hours*
//*****************************************************
void ProductionWorker::setHours(float hrs){
    hours=hrs;
}
//*****************************************************
//setShift() sets the value of the member function shift*
//*****************************************************
void ProductionWorker::setShift(int shft){
    shift=shft;
}



