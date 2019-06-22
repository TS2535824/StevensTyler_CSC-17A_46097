/* 
   File:   main
   Author: Tyler Stevens
   Created on June 20 2019
   Purpose:  Sort an array of strings
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void displayAry(string[],int);
void selectionSort(string[],int);
int binarySearch(string [], int , string );

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    const int NAMES = 20;
    string names[NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
                               "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                               "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    string find;//name user wants to find
    int position;//position of desired name in array
        
    //display unsorted array
    cout<<"Unsorted"<<endl;
    displayAry(names,NAMES);
    
    //sort array
    cout<<"Sorted "<<endl;
    selectionSort(names,NAMES);
    
    //display sorted array
    displayAry(names,NAMES);
    
    cout<<"Type a name: ";
    getline(cin, find);
    
    position=binarySearch(names,NAMES,find);
    
    
    //determine if user input is inside array or not
    if(position>0){ 
        cout<<"This is a valid name"<<endl;
    }else
        cout<<"Invalid name"<<endl;
   
    return 0;
}
//*******************************************************************
//Definition of displayAry. This function display contents of array.*
//*******************************************************************
void displayAry(string names[],int NAMES){
    
    
    for(int i=0;i<NAMES;i++){
        cout<<names[i]<<" "<<endl;
    }
    
}
//***********************************************************
//Definition of selectionSort. This function sorts the given *
//array in alphabetical order.                               *
//************************************************************
void selectionSort(string array[],const int size){
    
    //declare variables
    int startScan,
        minIndex;
    string minValue;
    
    
    //sort array with for loop
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        
        //go through array
        for(int i=startScan+1;i<size;i++){
            if(array[i]<minValue){
                minValue=array[i];
                minIndex=i;
            }
        }
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
   
}
//************************************************************************
//Definition of binarySearch. This function searches an array of strings.*
//************************************************************************
int binarySearch(string array[], int size, string value)
{
    //binary search
    int first = 0,						
            last = size - 1,				
            middle,							
            position = -1;					
    bool found = false;				

    while (!found && first <= last)
    {
            middle = (first + last) / 2; 	
            if (array[middle] == value)		
            {
                    found = true;
                    position = middle;
            }
            else if (array[middle] > value) 
                    last = middle - 1;
            else
                    first = middle + 1;			
    }
    return position;	
}
