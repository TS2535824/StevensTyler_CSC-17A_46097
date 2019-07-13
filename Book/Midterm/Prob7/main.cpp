    
/* 
   File:   main
   Author: Tyler Stevens
   Created on July 7 2019
   Purpose:  Factor an input integer into its prime number
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries
struct Prime{
	unsigned char prime;
	unsigned char power;
};
struct Primes{
	Prime *prime;
	unsigned char nPrimes;
};

//Global Constants

//Function prototypes
Primes *factor(int);
void prntPrm(Primes *);

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declaration of Variables
    int n;
    cout<<"Enter an integer between 2 and 10000: ";
    cin>>n;
    
    while(n<2||n>1000){
        cout<<"INVAILD"<<endl;
        cout<<"Enter an integer between 2 and 10000: ";
        cin>>n;
    }
    
    prntPrm(factor(n));

    
    //Exit Program
    return 0;
}
//***********************************************************************
//Definition of function Primes. This function receives a integer and   *
//factors it into its primes                                            *
//***********************************************************************
Primes *factor(int n){

    //declare variable
    Primes p[50];
    for(int i=0;i<50;i++){
        p[i].prime->power=0;
        p[i].prime->prime=0;
        
    }
    int exp=0;
    
    
    for(int i=2;n==1;i++){
      
        while(n%i==0){
  
        } 
    }
    
    return p;
}
//******************************************************************
//Definition of function printPrm, This function output the number *
//and it's primes -> 120 = 2^3 * 3^1 * 5^1                         *
//******************************************************************
void prntPrm(Primes *f){
    
    
  
}
