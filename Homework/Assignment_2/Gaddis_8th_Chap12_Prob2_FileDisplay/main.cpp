/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on FJuly 7 2019
 * Purpose:  The program should display the
            contents of the file on the screen. If the file’s contents won’t
*           fit on a single screen, the program
            should display 24 lines of output at a time, and then pause. Each
            time the program
            pauses, it should wait for the user to strike a key before the next
            *  24 lines are displayed.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>  //file operations
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
    fstream inputFile;
    char lines[150];
    string name;
    
    //get file name
    cout<<"File name: ";//french.txt
    cin>>name;
    
    inputFile.open(name,ios::in);
    
    //check file
    if(!inputFile){
        cout<<"Error"<<endl;
        return 0;
    }
    //otherwise display file
    else{
        
        int count=0;
        while(!inputFile.eof()){
            
            if(count>24){
                count=0;
            }
            inputFile.getline(lines,150,'\n');
            cout<<lines<<endl;
            count++;
        }
    }

    //Exit stage right or left!
    return 0;
}

