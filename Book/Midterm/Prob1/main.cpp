/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 9 2019
 * Purpose:  Banking software that a user can return to 
 *           and update or create new account.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
#include <cmath>
//#include <cstdlib>
using namespace std;

//User Libraries
#include "prob1.h"


//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes
void createAccount();
void destroy(DynAry*);
void displayObject(DynAry*,int);
void fillAry(DynAry*, int);
void update(DynAry*,string);
bool countDigits(string);
bool verifyAccount(string&);
int getAccountNumber();

//Execution Begins Here!
int main() {
    
    //declare variables
    DynAry* user=nullptr;
    bool status1;
    string account;
    
    //verify account
    status1=verifyAccount(account);
    
    //new account user
    if(status1){
        
        //determine number of accounts then add one
        //then use number to dynamically allocate array
        user=new DynAry[3];     
        cout<<"New User"<<endl;
        
        user[2].accNum=account;
        fillAry(user,3);
        displayObject(user,2);
        update(user,account);
        displayObject(user,2);
        
    }
    //old account user
    else{
        
        //dynamically allocate structure array
        user=new DynAry[2]; 
        
        //display user account number
        cout<<"Old user account number: ";
        cout<<account<<endl;
        
        //fill structure array with user information
        fillAry(user,2);
        
        
        //determine which of the two old users to update 
        if(account=="12345"){
            //display current account information
            displayObject(user,0);
            
            //update account information
            update(user,account);
            
            //display updates account information
            displayObject(user,0);
        }
        else{
            //display current account information
             displayObject(user,1);
             
             //update account information
             update(user,account);
             
             //display updated account information
             displayObject(user,1);
        }
           
    }
    
//    //delete array
//    destroy(user);
    
    return 0;
}
//**********************************************************************
//Definition of function fillAry. This function determine which user   *
//the program is dealing with and fills the array accordingly          *
//**********************************************************************
void fillAry(DynAry *user, int size){
    
    //user names
    user[0].name="Tyler Stevens";
    user[1].name="Christina White";
    
    //users address
    user[0].address="10767 Made-up Lane";
    user[1].address="27134 Nowhere Drive";
    
    //users account number
    user[0].accNum="12345";
    user[1].accNum="67891";
    
    //balance
    user[0].balance=4000;
    user[1].balance=1000000;
    
    
    //fill array with the new users account information
    if(size>2){
        
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,user[2].name);
        cout<<"Enter address: ";
        getline(cin,user[2].address);
        cout<<"Enter balance: ";
        cin>>user[2].balance;
       
    }
    
    //initial value for all user when program begins
    for(int i=0;i<size;i++){
        
        user[i].checks=0;
        user[i].deposits=0;
        
    }
    //formatting purposes
    cout<<"\n\n\n";

}
//********************************************************************************
//Definition of function verifyAccount. This function determine if account exists*
//if not it will ask user to either create one or exit program                   *
//********************************************************************************
bool verifyAccount(string &account){
    
    
    //declare variables
    char choice;            //user choice to continue or terminate program
    
    
    
    //determine account number. it must be 5 digits long or 
    //program will not continue
    while(countDigits(account)){
    cout<<"\nEnter account number(must be five digits long): ";
    cin>>account;
    }
  
    //determine if new or old user
    if(account=="12345"){
        return false;
    }
    else if(account=="67891"){
        return false;
    }
    else{
        
        //have user create new account or exit
        cout<<"Account not found, would you like to create one? y/n: ";
        cin>>choice;
        
        if(choice=='y'){
           
            return true;
        }
        else {
            cout<<"Exiting Program."<<endl;
             exit(0);
            
        }     
    }   
}
//**************************************************************
//Definition of function displayObject. This function display  *
// The users account information;                              *
//**************************************************************
void displayObject(DynAry *user, int i){
    
    cout<<"Name:                       "<<user[i].name<<endl;
    cout<<"Address:                    "<<user[i].address<<endl;
    cout<<"Account Number:             "<<user[i].accNum<<endl;
    cout<<"Balance:                    "<<user[i].balance<<endl;
    cout<<"Checks written:             "<<user[i].checks<<endl;
    cout<<"Total deposited:            "<<user[i].deposits<<endl;
    cout<<"\n\n\n";
    
}
//**********************************************************************
//Definition of function update. This function updates the user        *
//account information and allows then to deposit and withdraw money    *
//from account                                                         *
//**********************************************************************
void update(DynAry *user, string account){
    
    //declare variables
    int index,              //index position for users account
        total=0;            //what the user is either withdrawing or depositing 
    bool status=true;       //determine when to exit out of do while loop
     
    //determine user/index
    if(account=="12345"){
        index=0;
    }
    else if(account=="67891"){
        index=1;
    }
    else{
        index=2;
    }
    
    
    //loop through users choices
    cout<<"Welcome "<<user[index].name<<endl;
    do{
        
        total=0;
        int swtch;
        cout<<"Deposit? Enter 1. Write check? Enter 2. Exit? Enter any key: ";
        cin>>swtch;
        
        switch(swtch){
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>total;
                user[index].deposits+=total;
                break;
            case 2:
                cout<<"Enter check amount: ";
                cin>>total;
                user[index].checks+=total;
                break;
            default:
                status=false;
            
        }
        
    }while(status);
    
    
    //update and charge fee if overdrawn
    user[index].balance+=user[index].deposits;
    user[index].balance-=user[index].checks;
    if(user[index].balance<0){
        cout<<"Account overdrawn, you know owe an additional 20$."<<endl;
        user[index].balance-=20;
    }
    
    //formatting purposes
    cout<<"\n\n\n";
    
}
//***********************************************************************
//Defintion of function countDigits. This function determines how many  *
//digits are in the account number the user enters.                     *
//***********************************************************************
bool countDigits(string account){
  
  //start number of digits at zero  
  int count=0;
  for(int i=0;i<sizeof(account);i++)
     if(isdigit(account[i])) count++;
  
  if(count==5){
      return false;
  }
  return true;

}
//*******************************************************************
//Definition of function destroy. This function destroys the array   *
//and free up allocated memory                                      *
////*******************************************************************
//void destroy(DynAry *a){
//    delete a;
//}