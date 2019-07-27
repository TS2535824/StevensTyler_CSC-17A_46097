/* 
 * File:   SavingsAccount.h
 * Author: Tyler Stevens
 *
 * Created on July 26, 2019
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <iostream>
using namespace std;

class SavingsAccount{
public:
        SavingsAccount(float);               //Constructor
        void  Transaction(float);            //Procedure
        float Total(float=0,int=0);	         //Savings Procedure
        float TotalRecursive(float=0,int=0);
        void  toString();                    //Output Properties
private:
        float Withdraw(float);               //Utility Procedure
        float Deposit(float);                //Utility Procedure
        float Balance;                       //Property
        int   FreqWithDraw;                  //Property
        int   FreqDeposit;                   //Property

};


#endif /* SAVINGSACCOUNT_H */

