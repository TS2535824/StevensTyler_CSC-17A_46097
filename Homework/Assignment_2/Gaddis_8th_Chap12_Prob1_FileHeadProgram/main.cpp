/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  display ten lines from the file
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string fileName,file;
    char ch;
    
    fstream inputFile;
    
    //Input variables
    cout<<"File name: ";
    cin>>fileName;
    
    //read mode
    inputFile.open(fileName,ios::in);
    
    //check file
    if(!inputFile){
        cout<<"Error"<<endl;
        return 0;
    }else{
       
        //counter    
        int count=0;

        //end of file
        while((ch=inputFile.get()!=EOF&&count<=10)){

            if(ch=='\n'){
                count++;
                
            }
            //display to the screen
            inputFile>>file;
            cout<<file;;

            

        }
    }
    //Exit stage right or left!
    return 0;
}
