/* 
   File:   main
   Author: Tyler Stevens
   Created on June 18 2019
   Purpose:  Determine number of days in a specific month
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
    int month,
        year;
    
    //Input values
    do{//input validation
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<"Enter a year: ";
    cin>>year;
    
    }while(month<0||month>12||year<0);
  
    
    //Process values -> and Display output
    switch(month){//choose correct number of days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"31 days"<<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"30 days"<<endl;
            break;
        case 2:
            if(year%4!=0){ 
                cout<<"28 days"<<endl; 
             }else if(year%400==0){ 
                 cout<<"29 days"<<endl; 
             }else if(year%100==0){ 
                cout<<"28 days"<<endl; 
             }else{ 
                 cout<<"29 days"<<endl; 
             }
            break;
    
    }

    //Exit Program
    return 0;
}