    
/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose:  Augment a 1-D array by 1 Element, place 0 in the first element 
 *           and copy the rest from the original shifted by 1 index.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int *getData(int &);//Read the array
int *augment(const int *,int);//Augment and copy the original array
void prntAry(const int *,int);//Print the array

//Execution Begins Here!
int main() {
  
    //Declaration of Variables
    int size=0;                 //size of array
    int *array=nullptr;        //to point to the integer array
    
    //get array and size
   array=getData(size);
   
   //display array
   prntAry(array,size);
   cout<<endl;
    
   //augment array
   array=augment(array,size);
   
   //display array
   prntAry(array,size+1);
   
   
    
    //free the dynamically allocated memory
    delete [] array;
    array=nullptr;

    //Exit Program
    return 0;
}
//******************************************************************************
//Definition of PrintDat. This function displays contents of an integer array. *
//******************************************************************************
void prntAry(const int *array,int size){
    
    for(int i=0;i<(size);i++){
        cout<<array[i];
        if(i<size-1)
            cout<<" ";
    }  
}
//*************************************************************************
//Definition of *getData. This function gets size of array and components *
//from user and returns array size and the array                          *
//*************************************************************************
int *getData(int &size){
    
    //input size of dynamic array
    cin>>size;
    
    // Dynamically allocate the array
    int *array = new int[size];
    
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    
    //return pointer to array
    return array;
}
//********************************************************************
//Definition of *augment function. this function copies an augmented *
//version of the passed array.                                       *
//********************************************************************
int *augment(const int *oldArray,int size){
    
     //dynamically allocated array
    int *array = nullptr;
    
    // Validate the size. If 0 or a negative number was passed, return a null pointer.
    if (size <= 0)
    return nullptr;
    
    // Allocate a new array.
    array = new int[size+1];
    
    // Copy the array's contents to the new array.
    array[0]=0;
    for (int index = 0; index <(size); index++)
        array[index+1] = oldArray[index];
    
    return array;
}

