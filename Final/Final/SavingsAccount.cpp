/* 
 * File:   SavingsAccount.cpp
 * Author: Tyler Stevens
 * 
 * Created on July 26, 2019
 */

#include "SavingsAccount.h"

//*******************************************************************
//Constructor sets values of member functions Balance, FreqDeposit  *
//and FreqWithDraw                                                  *
//*******************************************************************
SavingsAccount::SavingsAccount(float num){
    
    if(num<0){
        this->Balance=0;
    }
    else{
        this->Balance=num;
    }
    this->FreqDeposit=0;
    this->FreqWithDraw=0;
}
//*******************************************************************
//Transaction() determines if f the transaction is greater than 0   *
//then a Deposit is made else a Withdraw is made.                   *
//*******************************************************************
void SavingsAccount::Transaction(float num){
    
    if(num>0)
        Deposit(num);
    else
        Withdraw(num);
}
//*******************************************************************
//Withdraw() When a WithDrawal is made increment FreqWithDraw else  *
//if a Deposit is made increment FreqDeposit.                       *
//*******************************************************************
float SavingsAccount::Withdraw(float num){

    if (num!=0) {
        if ((Balance+num)>=0){
            Balance+=num;
            FreqWithDraw++;
    }
}
else {
    cout<<"WithDraw not Allowed"<<endl;
}
    
}
//************************************************************
//Desposit() deposits the balance and updates its frequency  *
//************************************************************
float SavingsAccount::Deposit(float num){
    Balance +=num;
    FreqDeposit++;
}
//**************************************
//toString() outputs all properties.   *
//**************************************
void SavingsAccount::toString(){
    cout<<"Balance="<<Balance<<endl;
    cout<<"WithDraws="<<FreqWithDraw<<endl;
    cout<<"Deposit="<<FreqDeposit<<endl;
}
//********************************************************************
//Total() tells you how much you will have in savings given the      *
//interest rate and the amount of time.                              *
//********************************************************************
float SavingsAccount::Total(float num, int time){
    
    double total = Balance;
    for (int i=0;i<time;i++) {
        total+=(total*num);
    }
    return total;
}
//*******************************************************************
//TotalRecursive() does the Total() recursive procedure that does   *
//the same thing as                                                 *
//*******************************************************************
float SavingsAccount::TotalRecursive(float rate, int years){
    
    Balance=Balance+(Balance*rate);
    if(years>1){
        Balance=TotalRecursive(rate,years-1);
    }
    return Balance;
}