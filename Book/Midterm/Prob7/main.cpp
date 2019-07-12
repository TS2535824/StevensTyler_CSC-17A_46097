    
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
	unsigned short prime;
	unsigned short power;
};
struct Primes{
	Prime *prime;
	unsigned short nPrimes;
};

//Global Constants

//Function prototypes
Primes *factor(unsigned short);
void prntPrm(Primes *);

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declaration of Variables
    int n;
    cout<<"Enter an integer between 2 and 1000: ";
    cin>>n;
    
    while(n<2||n>1000){
        cout<<"INVAILD"<<endl;
        cout<<"Enter an integer between 2 and 1000: ";
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
Primes *factor(unsigned short n){
   
     //Declare Variables
    Primes* factors=nullptr;
    int index=0;
    unsigned short exp=0;
    int size=1000;
    
    //dynamically allocate structure array
    factors=new Primes[size]; 
    
    
    
    for(int i=2;n==1;i++){
      
        while(n%i==0){
           
            exp++;
            cout<<n/i<<endl;
            n=n/i;
        }
        factors->prime->prime[i]=exp;
        
        
        if(exp<0){
            index++;
        }
        exp=0;
        
    }
}
//******************************************************************
//Definition of function printPrm, This function output the number *
//and it's primes -> 120 = 2^3 * 3^1 * 5^1                         *
//******************************************************************
void prntPrm(Primes *f){
    int size=sizeof(f);
    
    for(int i=0;i<size;i++){
       cout<<f.prime[i]<<"^"<<f->nPrimes[i]<<"*"<<endl;
    }
}
