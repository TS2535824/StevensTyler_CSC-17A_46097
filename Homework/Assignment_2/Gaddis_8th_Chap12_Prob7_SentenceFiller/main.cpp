/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 8 2019 3:06 PM
 * Purpose:  The program will read the contents of the first
             file and change all the letters to lowercase except the first 
 *           letter of each sentence, which
             should be made uppercase. The revised contents should be 
 *           stored in the second file.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<fstream>
#include<string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    fstream inFile;
    fstream outFile;
    string input;
    string output;
    bool firstChar;
    char ch;
    
    //Input values
    cout<<"File name #1: ";
    cin>>input;
    
    cout<<"File name #2: ";
    cin>>output;
    
    //open input and output
    inFile.open(input,ios::in);
    outFile.open(output,ios::out);
    
    //check file
    if(!inFile){
        cout<<"File not found"<<endl;
        return 0;
    }
    
    firstChar=true;
    
    //read the first character from file
    inFile.get(ch);
    
    while(!inFile.fail()){
        
        if(ch==' '||ch=='\t'||ch=='\n'){
            
            outFile.put(ch);
        }
        else if(firstChar){
            outFile.put(toupper(ch));
            
            firstChar=false;
        }
        else{
            outFile.put(tolower(ch));
        }
        if(ch=='.'){
            firstChar=true;
        }
        //next character
        inFile.get(ch);
    }
    
    //close files
    inFile.close();
    outFile.close();
    
    
    //Exit stage right or left!
    return 0;
}
