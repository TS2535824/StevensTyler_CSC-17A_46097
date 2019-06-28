/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 26 2019 1:37PM
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //display purpose
    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}
//*********************************************************************
//Definition of function read. This function inputs the number of rows*
//and columns for arrays. Then, this function inputs the table.        *
//*********************************************************************
void read(int array[][COLMAX],int &row,int &col){
    
    //user inputs number of rows and columns
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    cin>>row;
    cin>>col;
    
    //user inputs table
    cout<<"Now input the table."<<endl;
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
           cin>>array[x][y];
        }
    }  
} 
//*****************************************************************************
//Definition of function read. This function display contents of array.       *
//It is formated with w width of 10 between each variable and a new line per  *
//row.                                                                        *
//*****************************************************************************
void print(const int array[][COLMAX],int row,int col,int w){
    
    //display array
    for(int x=0;x<row;x++){
        
        for(int y=0;y<col;y++){
            
            //set with at 10
            cout<<setw(w)<<array[x][y];
            
        }cout<<endl;
    }  
    
}
//************************************************************************
//Definition of function sum. This receives a table and creates          *
//and augmented table. The augmented table has the row sums in           *
//the new column and the column sums in the new row. The grand sum is in *
//the lower corner of the table.                                         *
//************************************************************************
void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX]){
    
    //fill array with zeros
    for(int j = 0; j < col; j++){
        augAry[row][j] = 0;
    }
    for(int i = 0; i < row; i++){
        
        augAry[i][col] = 0;
        
            //sum rows and columns
            for(int j = 0; j < col; j++){
                
                augAry[i][j] = array[i][j];
                augAry[i][col] +=array[i][j];
                augAry[row][j] += array[i][j];
                augAry[row][col] += array[i][j];
            }
        }
    }