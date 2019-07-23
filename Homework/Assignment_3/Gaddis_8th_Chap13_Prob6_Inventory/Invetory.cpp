/* 
 * File:   Invetory.cpp
 * Author: Tyler Stevens
 * Created on July 18, 2019, 6:53 PM
 * Purpose 
 */

#include "Invetory.h"
using namespace std;


//**********************************************************************
//Inventory constructor sets member variable value to zero by default  *
//**********************************************************************
Invetory::Invetory(){
    
    itemNumber=0;
    quantity=0;
    cost=0;
    totalCost=0;
    
}
//*************************************************
//Inventory constructor sets member variable value*
//*************************************************
Invetory::Invetory(int i,int q,float c){
    
    if(i>0)
        itemNumber=i;
    if(q>0)
        quantity=q;
    if(q>0)
        cost=c;
    
    totalCost=c*q;
    
}
//*******************************************************
//setitemNumber sets member variable value of itemNumber*
//*******************************************************
void Invetory::setItemNumber(int i){
    
    if(i>0)
        itemNumber=i;
}
//*******************************************************
//setQuantity sets member variable value of quantity     *
//*******************************************************
void Invetory::setQuantity(int i){
    
    if(i>0)
        quantity=i;
}
//*******************************************************
//setCost sets member variable value of cost            *
//*******************************************************
void Invetory::setCost(float i){
    
    if(i>0)
        cost=i;
}
//*******************************************************
//setTotalCost sets member variable value of totalCost  *
//*******************************************************
void Invetory::setTotalCost(){
    
        totalCost=quantity*cost;
}

