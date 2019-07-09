/* 
   File:   main
   Author: Tyler Stevens
   Created on June 28 2019
   Purpose: Create a 2-D array 1 row and 1 column larger than the array 
 *          to copy with 0's in the 1st row and column but filled with the 
 *          other rows and columns using the original array.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int **getData(int &,int &);//Get the Matrix Data
void printDat(const int * const *,int,int);//Print the Matrix
int **augment(const int * const *,int,int);//Augment the original array
void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int row=0,col=0;
    int **array=nullptr; 

    //get array and size
    array=getData(row,col);

    //display table
    printDat(array,row,col);
    cout<<endl;
    
    //augment array
    array=augment(array,row,col);
    
    //print augmented array
    printDat(array,row+1,col+1);
    
    //destroy augmented dynamic array
    destroy(array,row);
    
    //Exit Program
    return 0;
}
//***********************************************************************
//Definition of function **getData. This function returns the 2-D array *
//and its size.                                                         *
//***********************************************************************
int **getData(int &row,int &col){
    
    //input row and col
    cin>>row>>col;
    
     // Dynamically allocate 2d array
    int** array=new int*[row+1];
    for(int i=0;i<row;i++){
        array[i]=new int[col+1];
    }
    
    for(int x=0;x<row;x++){
        
        //input array value
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
void printDat(const int* const *array,int row,int col){
    
   //display array
    for(int x=0;x<row;x++){
        
        if(x<row&&x!=0)
                cout<<endl;
        
        for(int y=0;y<col;y++){
            
            //set with at 10
            cout<<array[x][y]<<" ";   
            
        } 
    }  
}
//************************************************************
//Definition of function destroy. This function deallocates  *
//the dynamically allocated 2d array                         *
//************************************************************
void destroy(int **array,int row){
    
    //delete allocated memory
    for(int i=0;i<row;i++)
        delete[] array[i];
        
    delete[] array;
    array=nullptr;
}
//***********************************************************************
//Definition of function augment. This function creates  a 2-D array    *
//1 row and 1 column larger than the array to copy with 0's in the 1st  *
//row and column but filled with the other rows and columns using the   *
//original array, i.e augment the original array                                                       *
//***********************************************************************
int **augment(const int * const *oldarray,int row,int col){
    
    //dynamically allocate 2d array
    int** array=new int*[row+1];
    for(int i=0;i<row+1;i++){
        array[i]=new int[col+1];
    }
    
    //copies zeros into array
    for(int x=0;x<row+1;x++){
        
        for(int y=0;y<col+1;y++){
           array[x][y]=0;
        }
    }
    
    //augment array
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
           array[x+1][y+1]=oldarray[x][y];
        }  
    } 
    
    return array;
    
}

