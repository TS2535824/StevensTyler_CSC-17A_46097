    
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
	int prime;
	int power;
};
struct Primes{
	Prime *prime;
	int nPrimes;
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
    
     //Declare variables and fill
    int arySize=16;
    Primes *p=new Primes;
   // p->nPrimes=0;
    p->prime=new Prime[50];
    p->nPrimes=n;
    int incre=2;
    
    
    
    for(int i=0;i<50;i++){

        
        while(n%incre==0){
            
            p->prime[i].prime=incre;
            p->prime[i].power++;
            n=n/incre;
            
        } 
        incre++;
    }
 
    
    return p;
}
//******************************************************************
//Definition of function printPrm, This function output the number *
//and it's primes -> 120 = 2^3 * 3^1 * 5^1                         *
//******************************************************************
void prntPrm(Primes *f){
    
    
    
    int size=sizeof(f->prime->prime);
       cout<<f->nPrimes<<" = ";
    for(int i=0;i<size;i++){
        
        if(!f->prime[i].prime==0){
            cout<<f->prime[i].prime<<"^"<<f->prime[i].power<<" * ";
            
        }
        
            
        
    }
  
}
