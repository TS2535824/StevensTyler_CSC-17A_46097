/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 26 2019
 * Purpose:  Sorting an array of characters if specified correctly
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int  read(char []);
void sort(char [],int);
void print(const char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    sizeDet=read(array);//Determine it's size
    
    
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet==sizeIn){
        sort(array,sizeIn); //Sort the array
        print(array,sizeIn);//Print the array
    }else{
        cout<<(sizeDet<sizeIn?"Input size less than specified.":
            "Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}
//*****************************************************************************
//Definition of read function. This function creates a 1D array of characters.*
//*****************************************************************************
int read(char array[]){
    
    //input characters from user into array
    cin>>array;
    
    //return size of user array
    return strlen(array);
    
}
//**************************************************************
// Definition of function sort.                       *
// This function performs an ascending order selection sort on *
// array. size is the number of elements in the array.         *
//**************************************************************
void sort(char array[], int size){
    
    //declare variables
    int spot,//create position for sorted array
        j;//index movement

        //run through for loop
        for (int i = 1; i < size; i++) {
       
            spot= array[i];
            j = i-1;//offset array

            //move elements that are < that spot
            while (j >= 0 && array[j] > spot) {
                array[j+1] = array[j];
                j = j-1;
            }

            //create new spot
            array[j+1] = spot;
        }
}
//***********************************************************************
//Definition of function print. This function prints out the contents   *
//of a character array.                                                 *
//***********************************************************************
void print(const char array[],int size) {
    
    //loop through array
    for(int i=0; i<size; i++) {
    cout << array[i];
    }
    //create a new line so code-e will be happy
    cout<<endl;

}