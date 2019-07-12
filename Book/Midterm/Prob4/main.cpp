/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 10 2019
 * Purpose:  Encrypt and decrypt 5 digit 
 *           array and do not except 8 or 9 as an input.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int convert2Int(char);
void displayCode(int[]);
bool flags(int []);
void encrypt(int []);
void decrypt(int []);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char charAry[5];
    int array[5];
    bool flag=true;
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter four digit integers(0-7): ";
    cin>>charAry;
   
    
    //convert char to string
    for(int i=0;i<5;i++){
        
        array[i]=convert2Int(charAry[i]);
    }
    
    //check for eights and nines
    flag=flags(array);
    
    }while(flag);
    
    
    //display code   
    cout<<"Original..."<<endl;
    displayCode(array);
    
    cout<<"Encrypted..."<<endl;
    encrypt(array);
    displayCode(array);
    
    cout<<"Decrypted..."<<endl;
    decrypt(array);
    displayCode(array);
    

    //Exit stage right or left!
    return 0;
}
//***************************************************************
//Definition of function convert2Int. This function receives a  *
//char and converts it to an integer.                           *
//***************************************************************
int convert2Int(char character){
    return character-'0';
}
//************************************************************
//Definition of function displayCode. This function display  *
//contents of array and flags 8 and 9                        *
//************************************************************
void displayCode(int array[]){
    
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//************************************************************
//Definition if function flags. This function determines if  *
//there is an 8 or 9 inside array.                           *
//************************************************************
bool flags(int a[]){
    
    for(int i=0;i<5;i++){
        if(a[i]==9||a[i]==8){
            cout<<"8 and 9 are invalid entries, try again..."<<endl;
            return true;
        }
    }
    return false;
}
//**********************************************************************
//Definition of encrypt. This function takes the sum of array index    *
// and adds 5%8 to each. Then swaps index 0 with index 2 and           *
//index 1 with index 3.                                                *
//**********************************************************************
void encrypt( int a[]){

    //Replace each digit by the sum of that digit plus 5 modulus 8. 
    for(int i=0;i<5;i++){
        a[i]+=(5%8);   
    }
    
    //initialize swap variables
    int swap0=a[0],
        swap1=a[1],
        swap2=a[2],
        swap3=a[3];
    
        //swap
        a[0]=swap2;
        a[1]=swap3;
        a[2]=swap0;
        a[3]=swap1;
     
}
//********************************************************************
//Definition of decrypt. This function takes the sum of array index  *
// and subtracts 5%8 to each. Then swaps index 2 with index 0 and    *
//index 3 with index 1.                                              *
//********************************************************************
void decrypt( int a[]){

    //Replace each digit by the sum of that digit plus 5 modulus 8. 
    for(int i=0;i<5;i++){
        a[i]-=(5%8);   
    }
    
    //initialize swap variables
    int swap0=a[0],
        swap1=a[1],
        swap2=a[2],
        swap3=a[3];
    
        //swap
        a[0]=swap2;
        a[1]=swap3;
        a[2]=swap0;
        a[3]=swap1;
     
}