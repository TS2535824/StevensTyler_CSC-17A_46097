/* 
   File:   main
   Author: Tyler Stevens
   Created on June 18 2019
   Purpose:  Predict the size of a population of organisms.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int start,//starting number of organisms
        days;//number of days they will multiply
    
    float perInc,//average daily population increase
          incr;//increase of population
    
    //Input values for declared variables
    cout<<"What is the starting number of organism? ";
    cin>>start;
    
    //input validation
    while(start<2)
    {
        cout<<"INVALID! Number must be greater that two."<<endl;
        cout<<"What is the starting number of organism?: ";
        cin>>start; 
    }
    
    cout<<"What is the average daily population increase? ";
    cin>>perInc;
    
    //input validation
    while(perInc<0)
    {
        cout<<"INVALID! Percentage must not be negative."<<endl;
        cout<<"Whats is the average daily population increase? ";
        cin>>perInc;
    }
    
    cout<<"What is the number of days they will multiply? ";
    cin>>days;
    
    //input validation
    while(days<1)
    {
        cout<<"INVALID! Number must be greater than 1. "<<endl;
        cout<<"What is the number of days they will multiply? ";
        cin>>days;
    }
    
    //Process values -> Map inputs to Outputs
    if(perInc==0){
        cout<<"No population increase."<<endl;
        return 0;
    }
    
    //calculate population increase.
    incr=(perInc*start)/100.0;
    
    
    //Display Output
    for(int i=0;i<days;i++){
        
        start=start+incr;
        cout<<"Day "<<(i+1)<<" increase: "<<start<<endl;
        
    }

    //Exit Program
    return 0;
}