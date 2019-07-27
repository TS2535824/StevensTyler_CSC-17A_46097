/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 26 2019
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
#include "Prob1Random.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    char n=5;
	char rndseq[]={18,33,56,79,125};
	int ntimes=100000;
	Prob1Random a(n,rndseq);
	for(int i=1;i<=ntimes;i++)
	{
		a.randFromSet();
	}
	int *x=a.getFreq();
	char *y=a.getSet();
	for(int i=0;i<n;i++)
	{
		cout<<int(y[i])<<" occured "<<x[i]<<" times"<<endl;
	}
	cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
    

    //Exit stage right or left!
    return 0;
}