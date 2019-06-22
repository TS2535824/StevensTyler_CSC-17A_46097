/* 
   File:   main
   Author: Tyler Stevens
   Created on June 19 2019
   Purpose:  Read weather data from a file and calculate which month had the most rain.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int DAYS=30,MONTH=3;

//Function prototypes
void fillAry(char[][DAYS],int);
void calWeather(char [][DAYS],int [][MONTH],int,int);
void displayAry(char[][DAYS],int);
void displayAry(int[][MONTH]);
void mostRain(int[][MONTH]);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //declare variables
    char array[MONTH][DAYS];
    int stats[MONTH][MONTH]={};
    
    //fill array
    fillAry(array,MONTH);
    //display array
    displayAry(array,MONTH);
    //calculate weather statistics
    calWeather(array,stats,DAYS,MONTH);
    //display weather statistics
    displayAry(stats);
    //calculate which month had most rain
    mostRain(stats);
   
    return 0;
}
//**********************************************
//Definition of fillAry function. This function*
//copies data from file into an array          *                         
//**********************************************
void fillAry(char array[][DAYS], int MONTH){
    
    //open input file
    ifstream inputFile;
    inputFile.open("RainOrShine.txt");
    
    //check if file opened
    if(!inputFile){
        cout<<"ERROR"<<endl;
        exit(0);
    }
        
   
    //copy data from file into array
    for(int x=0;x<MONTH;x++){
        
        for(int y=0;y<DAYS;y++){
           inputFile>>array[x][y];
        }
    }
    //close file
    inputFile.close(); 
}
//**********************************************************************************
//Definition of calWeather function. This function records how many days were rainy*
//cloudy or sunny.                                                                 *
//**********************************************************************************
void calWeather(char array[][DAYS],int stats[][MONTH],int DAYS, int MONTH){
    
    //calculate weather statistics
     for(int month=0;month<MONTH;month++){
        
        for(int days=0;days<DAYS;days++){
            if(array[month][days]=='R')
                stats[month][0]++;
            else if(array[month][days]=='C')
                stats[month][1]++;
            else
                stats[month][2]++;
        }
    }
}
//****************************************************************
//Definition of mostRain function. This function calculates which *
//of the three months had                                         *
//the most rain by comparing each month index from an array.      *
//***************************************************************
void mostRain(int stats[][MONTH]){
    int juneH=stats[0][0],
        julyH=stats[1][0],
        augH=stats[2][0],
        high=juneH;
    string month="June";
    
    //most rain in June
    for(int x=0;x<MONTH;x++){
        if(stats[0][x]>juneH)
            juneH=stats[0][x];
    }
    //most rain in July
    for(int x=0;x<MONTH;x++){
        if(stats[1][x]>julyH)
            julyH=stats[1][x];
    }
    //most rain in August
    for(int x=0;x<MONTH;x++){
        if(stats[2][x]>augH)
            augH=stats[0][x];
    }
    
    if(juneH<julyH&&julyH>augH){
        high=julyH;
        month="July";
    }
    if(juneH<julyH&&julyH<augH){
        high=augH;
        month="August";
    }
        
    cout<<"June highest: "<<juneH<<endl;
    cout<<"July highest: "<<julyH<<endl;
    cout<<"August highest: "<<augH<<endl;
    cout<<"Most rain: "<<month<<" with "<<high<<" days of rain. "<<endl;
}
//*********************************************************************
//definition of displayAry function. This function displays the month *
//the corresponds to the correct position in the arrays index         *
//*********************************************************************
void displayAry(char array[][DAYS], int MONTH){
    
    string month;
    for(int x=0;x<MONTH;x++){
        switch(x){
            case 0:
                month="June  ";
                break;
            case 1:
                month="July  ";
                break;
            case 2:
                month="August";
                break;      
        }
        cout<<month<<" ";
        for(int y=0;y<DAYS;y++){
           cout<<array[x][y];
        }
        cout<<endl;
    }     
}
//*********************************************************************
//definition of displayAry function. This function displays the month *
//the corresponds to the correct position in the arrays index         *
//*********************************************************************
void displayAry(int stats[][MONTH]){
    
     //display statistics
    string month;
    cout<<setw(15)<<"S C R"<<endl;
    for(int months=0;months<MONTH;months++){
        switch(months){
            case 0:
                month="June  ";
                break;
            case 1:
                month="July  ";
                break;
            case 2:
                month="August";
                break;      
        }
        cout<<month<<setw(3)<<" ";
        for(int data=0;data<MONTH;data++){
            cout<<stats[months][data]<<" ";
        }
        cout<<endl;
    }
    
}