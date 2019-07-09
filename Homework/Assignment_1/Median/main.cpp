/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose: Calculate the Median by creating a dynamic float array 2 larger 
 *          in size than the dynamic integer array.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>      //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int *getData(int &);         //Return the array size and the array
void prntDat(int *,int);    //Print the integer array
float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data
void prntMed(float *,int);     //Print the median Array

//Execution Begins Here!
int main() {
    //Declaration of Variables
    int size=0;                 //size of array
    int *array1=nullptr;        //to point to the integer array
    float *array2=nullptr;      //t0 point to the float array
    
    //get an array from user
    array1=getData(size);
    
    
    //calculate median array
    array2=median(array1,size);
    
    //Display Output
    prntDat(array1,size);
    
    //print median array
    prntMed(array2,size);

    // Free the memory.
    delete [] array1;
    delete [] array2;
    array1 = 0;
    array2 = 0;
    
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
    }cout<<endl;
}
//******************************************************************************
//Definition of *median. This function receives an array of                    *
//integers and its size. It then calculates the Median by creating a dynamic   *
//float array 2 larger in                                                      *
//size than the dynamic integer array.Fill the median Array with the Float     *
//array size, the median, and the integer array data                           *
//******************************************************************************
float *median(int *array,int size){

    //total used in calculating median
    float total=0;
    
    // Dynamically allocate the median array
    float *median = new float[size+2];
    
    //determine total used in median calculation
    for(int i=0;i<size;i++){
        
        total+=array[i];
    }
    
    //setting position to size of array
    median[0]=size+2;
    
    //setting position to median
    median[1]=(total)/(float)size;
    
    //copy contents of integer array into median array
    int y=0;//index for integer array
    for(int x=2;x<(size+2);x++){
        
        median[x]=array[y];
        y++;   
    }
    
    //return a pointer to array
    return median;
    
}
//************************************************************************
//Definition of function printMed. This function receives a DYNAMICALLY  *
//allocated float array and prints out its contents.                     *
//************************************************************************
void prntMed(float *array, int size){
   
    //Print the median Array
    cout<<*array<<" ";
    for(int i=1;i<(size+2);i++){
        cout<<setprecision(2)<<showpoint<<fixed;
        cout<<*(array+1);
        if(i<(size+1))
            cout<<" ";
        array++;
    }
}    

 
   

