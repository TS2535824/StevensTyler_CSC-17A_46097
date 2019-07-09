/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 8 2018
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int ARRAY=10;
const int NAME=20;

//Function Prototypes
void aryFile(char[],int[],int);
void FileAry(char[],int[],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //declare variables
    int arrayContents[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrayContents2[ARRAY];
    int* intPointer2;
    int* intPointer;
    intPointer = arrayContents;
    intPointer2 = arrayContents2;
    char fileName[NAME];

    //user input
    cout << "File name: ";
    cin.getline(fileName, NAME);
    aryFile(fileName, arrayContents, ARRAY);
    FileAry(fileName, arrayContents2, ARRAY);

    //display contents of arrayContents2
    for (int count = 0; count < ARRAY; count++)
    {
        cout << intPointer[count] << " ";
    }
        return 0;
}
//*******************************************************************
//Definition of function aryFile. This function has is an array to  *
//a file.                                                           *
//*******************************************************************
void aryFile( char file[], int pointer[], int arr_size)
{
    //declare variables
    fstream dataFile;
    
    dataFile.open(file, ios::in | ios::binary);
    
    for (int count = 0; count < arr_size; count++){
        
        dataFile.write(reinterpret_cast<char *>(pointer), sizeof(pointer));
    }

    //close file
    dataFile.close();

}
//*******************************************************************
//Definition of function aryFile. This function has is a file to  *
//an array.                                                           *
//*******************************************************************
void FileAry( char file[], int pointer[], int arr_size)
{
    //declare variables
    fstream dataFile;
    
    dataFile.open(file, ios::out | ios::binary);
    
    for (int count = 0; count < arr_size; count++){
        
        dataFile.read(reinterpret_cast<char *>(pointer), sizeof(pointer));
    }

    //close file
    dataFile.close();
}
            
    

