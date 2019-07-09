/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose:  Total the elements in a 2-D Array
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int **getData(int &,int &);        //Return the 2-D array and its size.
void prntDat(const int* const *,int,int);//Print the 2-D Array
void destroy(int **,int,int);       //Deallocate memory
int sum(const int * const *, int,int);    //Return the Sum

 

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int row=0,col=0,sumAry;                 //size of array
    int **array=nullptr; 
    
    //get array and size
   array=getData(row,col);
   
   //display table
   prntDat(array,row,col);
   
   //sum contents of array
   sumAry=sum(array,row,col);
   
   //display sum
   cout<<sumAry;
   
   //destroy allocated array
   destroy(array,row,col);
    
    //Exit Program
    return 0;
}
//***********************************************************************
//Definition of function **getData. This function returns the 2-D array *
//and its size.                                                         *
//***********************************************************************
int **getData(int &row,int &col){
    
    //input row and column amount
    cin>>row>>col;
    
     // Dynamically allocate 2d array
    int** array=new int*[row];
    for(int i=0;i<row;i++){
        array[i]=new int[col];
    }
    
    for(int x=0;x<row;x++){
        
        //input values into array
        for(int y=0;y<col;y++){
           cin>>array[x][y];
        }
    }   
    //return pointer to array
    return array;
}
//********************************************************************
//Definition of function prntDat. This function prints the 2D array. *
//********************************************************************
void prntDat(const int* const *array,int row,int col){
    
   //display array
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
            
             //set with at 10
            cout<<array[x][y];
            if(y<col-1)
                cout<<" ";
            
        //next line    
        }cout<<endl;
    }  
}
//**************************************************************
//Definition of function sum. This function receives an array  *
// and returns the sum of the contents.                        *
//**************************************************************
int sum(const int * const *array, int row,int col){
    
    //variable for sum
    int sum=0;
    
    //calculate sum of arrays contents of array
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
            
            sum+=array[x][y];  
        }
    }
    //return the value
    return sum;
}
//************************************************************
//Definition of function destroy. This function deallocates  *
//the dynamically allocated 2d array                         *
//************************************************************
void destroy(int **array,int row,int col){
    
    //delete allocated memory
    for(int i=0;i<row;i++)
        delete[] array[i];
        
    delete[] array;
    array=nullptr;
    
}
