
/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 22, 2019, 11:35 AM
 * Purpose Convert military time to standard time
 */

#include <iostream>
using namespace std;

//user libraries
#include "milTime.h"

int main() {
    
    //declare variables
    int hr,sec;
    milTime a(0,0);
    
    //user input
    cout<<"Enter Time in Military format: ";
    cin>>hr;
    
    //determine seconds
    sec=hr%10;
    
    //send data to setTime() member function
    try{
        a.setTime(hr,sec);
    }
    catch(milTime::BadHour){
        cout<<"invalid"<<endl;
    }
    catch(milTime::BadSeconds){
        cout<<"invalid"<<endl;
    }
    
    //display military time
    cout<<"Military: "<<a.getHour()<<a.getMin()<<" HOURS"<<endl;
    
    
    //determine Am or PM
    if(a.getHour()>=13){
        
        cout<<"Standard: "<<a.getStandHr()<<":";
        if(a.getMin()==0)
            cout<<a.getMin()<<"0"<<" PM"<<endl;
        else
            cout<<a.getMin()<<" PM"<<endl;    
    }
    else{
        
        cout<<"Standard: "<<a.getStandHr()<<":";
        if(a.getMin()==0)
            cout<<a.getMin()<<"0"<<" AM"<<endl;
        else
            cout<<a.getMin()<<" AM"<<endl;
    }
    
    //exit main
    return 0;
}
