/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  write a class named DayOfYear that takes an integer
             representing a day of the year and translates it to a string
 *           consisting of the month
             followed by day of the month.
 */
#include <iostream> //Main Library
#include <string>   //String Library
#include <algorithm>
#include "DayOfYear.h"
using namespace std;



  std::string const DayOfYear::mnth[12]={"January", "February", "March", "April",
                                         "May", "June", "July", "August",
                                         "September", "October", "November", "December"};
//********************************************************************
//Default Constructor DayOfYear sets num member variable equal to zero*
//********************************************************************
DayOfYear::DayOfYear(){
    num=0;
}

//*******************************************************************************
///getDate receives the corrects date and sets it to the correct member variable*
//*******************************************************************************
void DayOfYear::getDate(){
    
    //Input variables
    cout<<"Enter Number: "<<endl;
    do{
        cout<<"Enter Number Now: ";
        cin>>num;
        if(num<=0||num>365){
            cout<<"Number must be between 1 and 365."<<endl;
        }
    }while(num<=0||num>365);
}

void DayOfYear::print(){
    
    cout<<"Number: "<<num;
    //Shows Date with Displayed Number
    if(num>0&&num<32){
        cout<<" is "<<mnth[0]<<" "<<num<<endl;
    }
    else if(num>31&&num<60){
        num-=31;
        cout<<" is "<<mnth[1]<<" "<<num<<endl;
    }
    else if(num>59&&num<91){
        num-=59;
        cout<<" is "<<mnth[2]<<" "<<num<<endl;
    }
    else if(num>90&&num<121){
        num-=90;
        cout<<" is "<<mnth[3]<<" "<<num<<endl;
    }
    else if(num>120&&num<152){
        num-=120;
        cout<<" is "<<mnth[4]<<" "<<num<<endl;
    }
    else if(num>151&&num<182){
        num-=151;
        cout<<" is "<<mnth[5]<<" "<<num<<endl;
    }
    else if(num>181&&num<213){
        num-=181;
        cout<<" is "<<mnth[6]<<" "<<num<<endl;
    }
    else if(num>212&&num<244){
        num-=212;
        cout<<" is "<<mnth[7]<<" "<<num<<endl;
    }
    else if(num>243&&num<274){
        num-=243;
        cout<<" is "<<mnth[8]<<" "<<num<<endl;
    }
    else if(num>273&&num<305){
        num-=273;
        cout<<" is "<<mnth[9]<<" "<<num<<endl;
    }
    else if(num>304&&num<335){
        num-=304;
        cout<<" is "<<mnth[10]<<" "<<num<<endl;
    }
    else if(num>334&&num<365){
        num-=334;
        cout<<" is "<<mnth[11]<<" "<<num<<endl;
    }
}
