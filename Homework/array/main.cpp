/* 
   File:   main
   Author: Tyler Stevens
   Created on June 19 2019
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <fstream>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int DAYS=30,MONTH=3;

//Function prototypes
void displayAry(char[][DAYS],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    char array[MONTH][DAYS];
    int total=0;
    
    //open input file
    ifstream inputFile;
    inputFile.open("RainOrShine.txt");
    
    //check if file opened
    if(!inputFile){
        cout<<"ERROR"<<endl;
        return 0;
    }
        
   
    //copy data from file into array
    for(int x=0;x<MONTH;x++){
        
        for(int y=0;y<DAYS;y++){
           inputFile>>array[x][y];
        }
    }
    inputFile.close();
    
    //display array
    displayAry(array,MONTH);
    
//    for(int x=0;x<MONTH;x++){
//        
//        switch(x){
//            case 0:
//                month="June";
//                break;
//            case 1:
//                month="July";
//                break;
//            case 2:
//                month="August";
//                break;      
//        }
//        cout<<month<<" ";
//        for(int y=0;y<DAYS;y++){
//           cout<<array[x][y];
//        }
//        cout<<endl;
//    }
    
    
    
    
    return 0;
}

void displayAry(char array[][DAYS], int MONTH){
    
    string month;
    for(int x=0;x<MONTH;x++){
        
        switch(x){
            case 0:
                month="June";
                break;
            case 1:
                month="July";
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