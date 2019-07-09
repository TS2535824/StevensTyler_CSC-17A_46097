/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose:  Read in a dynamic array.Output the reverse sorted 
 *           dynamic array by first sorting from smallest to largest.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int *getData(int &);               //Fill the array
int *sort(const int *,int);         //Sort smallest to largest
int *reverse(const int *,int);  //Sort in reverse order
void prntDat(int *,int); //Print the array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int size=0;                 //size of array
    int *array=nullptr;         //pointer
    
    //Input values
    array=getData(size);
    
    //sort array smallest to largest
    array=sort(array,size);
    
    //display array
    prntDat(array,size);
    cout<<endl;
    
    
    //sort array in reverse;
    array=reverse(array,size);
    
    //display array
    prntDat(array,size);
    
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
//******************************************************************************
//Definition of PrintDat. This function displays contents of an integer array. *
//******************************************************************************
void prntDat(int *array,int size){
    
    for(int i=0;i<size;i++){
        cout<<array[i];
        if(i<size-1)
            cout<<" ";
    }
    
}
//***********************************************************
// Definition of function sortArray                         *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array.      *   
 //**********************************************************
int *sort(const int *oldArry,int size)  
 {
    int *array = nullptr;
    
    // Validate the size. If 0 or a negative number was passed, return a null pointer.
    if (size <= 0)
    return nullptr;
    
    // Allocate a new array.
    array = new int[size];
    
    // Copy the array's contents to the new array.
    for (int index = 0; index < size; index++)
    array[index] = oldArry[index];
    
    bool swap;
    int temp;
    
    //sort array
    do{
        swap=false;
        
        for(int i=0;i<(size-1);i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swap=true;
            }
        }
        
    }while(swap);
    
    //return sorted array
    return array;
    
 }
//**********************************************************************
//Definition of function reverse. This function copies contents from   *
//a const array in to an int array and display the numbers in reverse. *
//**********************************************************************
 //**********************************************************
int *reverse(const int *oldArry,int size)  
 {
    int *array = nullptr;
    
    // Validate the size. If 0 or a negative number was passed, return a null pointer.
    if (size <= 0)
    return nullptr;
    
    // Allocate a new array.
    array = new int[size];
    
    // Copy the array's contents to the new array.
    int x=0;
    for (int i=size-1; i>=0; i--){
        array[x] = oldArry[i];
        x++;
    }
    return array;
    
 }