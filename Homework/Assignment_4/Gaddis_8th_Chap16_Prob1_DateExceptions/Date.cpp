/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Member function for Class Date.
 *           Display in formates 12/25/2014, December 25, 2014 and 
 *           25 December 2014.
 */
#include "Date.h"   // Needed for the Rectangle class
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;


//*************************************************
//setDay set the value of the member variable day *
//*************************************************
void Date::setDay(unsigned int d){
    
    //Do not accept values for the day greater than 31 or less than 1.
    if(d<31&&d>1)
        day=d;
    else
       throw wrongDay(); 
}
//*************************************************
//setDay set the value of the member variable day *
//*************************************************
void Date::setMonth(unsigned int m){
    
    //Do not accept values for the month greater than 12 or less than 1.
    if(m<12&&m>1)
        month=m;
    else
        throw wrongMonth();
}
//*************************************************
//setDay set the value of the member variable day *
//*************************************************
void Date::setYear(unsigned int y){
    
    if(y>=0)
        year=y;
    else 
        throw wrongYear();
}
//***************************************************************
//display1 uses member variables to display date. Ex->12/25/2014*
//***************************************************************
void Date::display1(){
    
    cout<<day<<"/"<<month<<"/"<<year<<endl;
    
}
//**********************************************************************
//display2 uses member variables to display date. Ex->December 25, 2014*
//**********************************************************************
void Date::display2(){
    
    //used for storing the month into a string
    string m;
    
    //determine month based on memory variable value
    switch(month){
        case 1: 
            m="January"; 
            break;
        case 2:  
            m="February";
            break;
        case 3:  
            m="March"; 
            break;
        case 4:  
            m="April";
            break;
        case 5: 
            m="May"; 
            break;
        case 6: 
            m="June"; 
            break;
        case 7:  
            m="July";
            break;
        case 8:
            m="August"; 
            break;
        case 9:  
            m="September";
            break;
        case 10: 
            m="October";
            break;
        case 11: 
            m="November";
            break;
        case 12: 
            m="December";
            break;
        default: 
            m="Not a month!"; 
            break;
            
    }
    
    cout<<m<<" "<<day<<", "<<year<<endl;

    
}
//*********************************************************************
//display3 uses member variables to display date. Ex->25 December 2014*
//*********************************************************************
void Date::display3(){
    
    //used for storing the month into a string
    string m;
    
    //determine month based on memory variable value
    switch(month){
        case 1: 
            m="January"; 
            break;
        case 2:  
            m="February";
            break;
        case 3:  
            m="March"; 
            break;
        case 4:  
            m="April";
            break;
        case 5: 
            m="May"; 
            break;
        case 6: 
            m="June"; 
            break;
        case 7:  
            m="July";
            break;
        case 8:
            m="August"; 
            break;
        case 9:  
            m="September";
            break;
        case 10: 
            m="October";
            break;
        case 11: 
            m="November";
            break;
        case 12: 
            m="December";
            break;
        default: 
            m="Not a month!"; 
            break;
            
    }
    
    cout<<day<<" "<<m<<" "<<year<<endl;

    
}