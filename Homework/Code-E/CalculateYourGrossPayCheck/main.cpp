/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 24 2019 9:53 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    
    float pay=0,half=0,dble=0;
    
    //straight-time
    if(hrsWrkd<20){
        pay=payRate*hrsWrkd;
    }
      
    //time and a half
    if(hrsWrkd>20&&hrsWrkd<40){

    half=(hrsWrkd-20)*(payRate*1.5);
    pay=(payRate*20)+half;
    }

    //double time
    if(hrsWrkd>40){
        
        half=(hrsWrkd-30)*(payRate*1.5);
        dble=(hrsWrkd-40)*(payRate*2);
        pay=(payRate*20)+dble+half; 
}
        
  
   
    //Output the check
    cout<<showpoint<<setprecision(2)<<fixed;
    cout<<"$"<<pay<<endl;
    
    
    //Exit
    return 0;
}