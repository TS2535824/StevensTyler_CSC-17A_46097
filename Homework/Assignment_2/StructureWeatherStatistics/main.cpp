/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 7 2019 10:30 AM
 * Purpose:  Use structures to store weather data
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //formatting
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int SIZE=12;//holds 12 months of data for arrays

//Function Prototypes

//Structures
struct weather{
  
   string month[SIZE];
   float rain[SIZE],  //inches
         high[SIZE],  //degrees Fahrenheit
         low[SIZE];   //degrees Fahrenheit
      
};

//Execution Begins Here!
int main() {
    
    //declare variables
    int position1=0,position2=0,lowest,highest;
    float avgRain=0,avgTemp=0;
    weather data;
    
    //input weather data from user
    for(int i=0;i<12;i++){
        
        cin>>data.month[i]>>data.rain[i]>>data.low[i]>>data.high[i];
        
    }
    
    //calculate average rainfall
    for(int i=0;i<12;i++){
        avgRain+=data.rain[i];
    }
    
    avgRain=avgRain/12;
    
    //calculate average temperature
    for(int i=0;i<12;i++){
        avgTemp+=data.high[i]+data.low[i];
    }
    
    //average temperature
    avgTemp=avgTemp/24;
    
    //calculate lowest temperature
    lowest=data.low[0];
    
    for(int i=0;i<12;i++){
        
        if(lowest>data.low[i]){
            
            lowest=data.low[i];
            position1=i;
            
        }           
    }
    
    //calculate highest temperature
    highest=data.high[0];
    
    for(int i=0;i<12;i++){
        
        if(highest<data.high[i]){
            
            highest=data.high[i];
            position2=i;
            
        }          
    }
    
     //display results
    cout<<setprecision(1)<<fixed;
    cout<<"Average Rainfall "<<avgRain<<" inches/month"<<endl;
    cout<<setprecision(0);
    cout<<"Lowest  Temperature "<<data.month[position1]<<"  "<<data.low[position1]<<" Degrees Fahrenheit"<<endl;
    cout<<"Highest Temperature "<<data.month[position2]<<"  "<<data.high[position2]<<" Degrees Fahrenheit"<<endl;
    cout<<"Average Temperature for the year "<<avgTemp<<" Degrees Fahrenheit"<<endl;
    
    //Exit stage right or left!
    return 0;
}