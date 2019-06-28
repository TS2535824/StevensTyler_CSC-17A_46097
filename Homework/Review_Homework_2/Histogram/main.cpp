/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 24 2019
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool digitOrCharacter(char[], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    char character[5];

    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>character;
     
    //Histogram Here
    for(int i=3;i>=0;i--){
        
    //determine whether value in array is a digit or a character
    if(digitOrCharacter(character,i)){
        cout<<character[i]<<" ";
        
        //convert char to int
        int n=character[i]-'0';
        
        //use position in array to iterate the loop so is can print out that many stars
        for(int star=0;star<n;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    //other wise print the character and a question mark
    else
        cout<<character[i]<<" ?"<<endl;;
    }
    
  
    //Exit
    return 0;
}
//**********************************************************************************
//Definition of function digitOrcCharacter. This function receives an array of     *
//characters and uses ascii value to determine whether or not character is a digit *
//0 through nine 9. if true it returns true, if false it returns false.            *
//*********************************************************************************
bool digitOrCharacter(char array[],int i){
   
    //determine whether the value is a digit or character.
    if ( array[i] >= '0' && array[i] <= '9' )   
        return true;
    else
        return false;

}