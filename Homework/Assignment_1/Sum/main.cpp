/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose:  Create a parallel array that represents the successive sum 
 *           of preceding members in the array.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int *getData(int &);             //Return the array size and the array from the inputs
int *sumAry(const int *,int);//Return the array with successive sums
void prntAry(const int *,int);//Print the array

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int size=0;                 //size of array
    int *array=nullptr;         //pointer
    
    //Input values
    array=getData(size);
    
    //display unsorted
    prntAry(array,size);
    cout<<endl;         //make code-e compiler happy
    
    //sum array
    array=sumAry(array,size);
    
    //display successive sum array
    prntAry(array,size);
    
    //free the dynamically allocated memory
    delete [] array;
    array=nullptr;
    
    //Exit Program
    return 0;
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
//************************************************************************
//Definition of function *sumAry. This functions copies data from const  *
//array into an int array then returns the array with successive sums    *
//************************************************************************
int *sumAry(const int *oldArry,int size){
    
    //dynamically allocated array
    int *array = nullptr;
    
    // Validate the size. If 0 or a negative number was passed, return a null pointer.
    if (size <= 0)
    return nullptr;
    
    // Allocate a new array.
    array = new int[size];
    
    // Copy the array's contents to the new array.
    array[0]=oldArry[0];
    for (int index = 0; index < size; index++)
        array[index+1] = oldArry[index];
    
    //set counters
    int x=0;        //new array counter
    int wacky=0;    //previous sum
    for (int i=0; i<size; i++){
        
        array[x]=wacky+oldArry[i];
        wacky=array[x];
        x++;
    }
    
    return array;
    
}
//******************************************************************************
//Definition of PrintDat. This function displays contents of an integer array. *
//******************************************************************************
void prntAry(const int *array,int size){
    
    for(int i=0;i<size;i++){
        cout<<array[i];
        if(i<size-1)
            cout<<" ";
    }  
}

