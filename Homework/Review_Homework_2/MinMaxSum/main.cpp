/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 26 2019 1:11PM
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}
//**************************************************************************
//Definition of read function. This function reads in an array of integers.*
//**************************************************************************
void read(int array[], int size){
    
    //fill array from user
    for(int i=0;i<size;i++){
        
        //position in array
        cin>>array[i];
        
    }
    
}
//**************************************************************************
//Definition of stat function. This function function determines the       *
//maximum and minimum values in an array and returns the sum of the array. *
//**************************************************************************
int  stat(const int array[],int size,int &max,int &min){
    
    //default choice
    max=array[0];
    min=array[1];
    int sum=0;
    
    for(int i=0;i<size;i++){
        
        //calculate sum
        sum+=array[i];
 
        //calculate maximum
        if (array[i] > max) {
            max=array[i];
        }
            //calculate minimum
            if(array[i]<min){
                min=array[i];
            }
    }
    
    return sum;
    
}
//*************************************************************************
//Definition of function print. This function displays contents of array, *
//its sum, minimum value and maximum value.                               *
//*************************************************************************
void print(const int array[],int size,int sum,int max,int min){
    
    //display array
    for(int i=0;i<size;i++){
        cout<<"a["<<i<<"] = "<<array[i]<<endl;
    }
    cout<<"Min  = "<<min<<endl;
    cout<<"Max  = "<<max<<endl;
    cout<<"Sum  = "<<sum<<endl;
}
