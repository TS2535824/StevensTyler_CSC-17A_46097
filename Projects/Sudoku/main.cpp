/* 
 * File:   main.cpp
 * Author: Tyler Stevens 
 * Created on July 13 2019
 * Purpose:  play a gain of Sudoku where the stakes are high with
 *           just three mistakes allowed
 */

//System Libraries
#include <iostream>
#include <fstream>          //file manipulation
#include <cstring>          //char manipulation
#include <string>           //string manip
#include <iomanip>          //formating

using namespace std;

//User Libraries
#include "Array2D.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int **fill2D(int,int);
DynAry2 *filStrc(int **,int,int);
void prnStrc(DynAry2 *);
void destroy(DynAry2 *);
bool test2(DynAry2 *);
void add2File(string,char);
void file(string);
bool winOrLose(DynAry2 *);
 long byteNum(int );
//Execution Begins Here
int main(int argc, char** argv) {
    
    //display rules
    file("Rules");
    cout<<"\n\n\n\n\n";
    
    //Declare Variables and Initialize
    int strikes=3;                              
    int rows=9;                                
    int cols=9;                               
    int **dynAry=fill2D(rows,cols);           
    DynAry2 *array2D=filStrc(dynAry,rows,cols);
    char score='A';                             
    bool stat1,stat2=true;                      
    string name;                                
    
    //get user name
    cin.ignore();
    cout<<"Enter your name: ";
    getline(cin,name);    

    //print lives
       cout<<"LIVES: ";
       for(int i=0;i<strikes;i++){
           cout<<"* ";
       }cout<<endl;
    
    //print board
    prnStrc(array2D);
    
   //enter game loop meat
   while(stat2) {
       
       //get and test user input
       stat1=test2(array2D);
       
       //validate
       if(stat1){
           cout<<"true"<<endl;
           stat2=winOrLose(array2D);
       }
       else{
           cout<<"false"<<endl;
           strikes--;
           if(strikes==0){
               stat2=false;
           }
       }
       //clear screen
       system("clear");
       
       //print lives
       cout<<"LIVES: ";
       for(int i=0;i<strikes;i++){
           cout<<"* ";
       }cout<<endl;
       //print board
       prnStrc(array2D);
   }
    //end of game loop
    cout<<"GAME-OVER"<<endl;   
    
    //determine score
    if(strikes==2)
        score='B';
    else if(strikes==1)
        score='C';
    else if(strikes==0)
        score='F';
                
    
    //add users name and score to file
     add2File(name,score);
     
     //display past player
     file("Scores");
    
   // Deallocate memory
    destroy(array2D);
    
    //Exit stage right!
    return 0;
}
//******************************************************************************
//Definition of function **fill2D. This function dynamically creates            *
//a 2d pointer array and fill it with contents of a file.                      *
//It is filled with either a easy, medium, or hard Sudoku board.               *
//******************************************************************************
int **fill2D(int row,int col){
    
    //declare variables
    int **a=new int*[row];                  //sudoku array
    ifstream dataFile;                      //file object 
    int choice;                             //for choosing difficulty 
    enum funTime {zero,easy,medium,hard};   //difficulties
    
    //determine difficulty from user
    cout<<"1 = easy, 2 = medium, and 3 = hard: ";
    cin>>choice;
    
    //open corresponding board
    switch(choice){
        case easy:
            dataFile.open("easy.txt");
            break;
        case medium:
            dataFile.open("medium.txt");
            break;
        case hard:
            dataFile.open("hard.txt");
            break;
        default:
            cout<<"Okay I will choose for you..."<<endl;//default choice is hard
            dataFile.open("hard.txt");
            
    }
    //verify file
     if (! dataFile) {
        cout << "Error, file couldn't be opened" << endl; 
        exit(0);
    }
    //dynamic array
    for(int i=0;i<row;i++){
        a[i]=new int[col];
    }
    //fill array from file
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           dataFile>> a[i][j];
           if ( ! dataFile ) {//error message
               cout << "Error reading file for element " << row << "," << col << endl; 
               exit(0); 
            }
        }  
    }
    //return the filled array
    return a;
}
//******************************************************************************
//Definition of function *filStrc. This function creats a dynamically allocated* 
//pointer objects to store Suduko boards from a 2d pointer array. As well      *
//as the size of the rows and columns or the board.                            *
//******************************************************************************
DynAry2 *filStrc(int **a,int row,int col){
    
    //dynamic memory allocation
    DynAry2 *d2=new DynAry2;
    
    //fill fileds with size
    d2->rows=row;
    d2->cols=col;
    
    //fil structure
    (*d2).array=a;
    return d2;
}
//******************************************************************************
//Definition of function prnStrc. This function prints contents from a         *
//structure and formates it to prints out board like sudoku game               *
//******************************************************************************
void prnStrc(DynAry2 *d2){
    
   //display column index
    cout<<"    "<<0<<" ";
    for(int i=1;i<d2->rows;i++){
        cout<<i<<" ";
        if(i==2||i==5||i==8)
            cout<<"  ";
    }cout<<endl;
    
    //display table
    for(int i=0;i<d2->rows;i++){
        
         //horizontal line
        if(i==3||i==6||i==9)
            cout<<"  | ---------------------"<<endl;
        
        
        for(int j=0;j<d2->cols;j++){
            
            //display row index
            if(j==0)
                cout<<i<<" | ";

            //vertical line
            if(j==3||j==6||j==9)
                cout<<"| ";
            
            //print out cell
             cout<<d2->array[i][j]<<" "; 
       
        }cout<<endl;
            
    }cout<<endl;
}
//******************************************************************************
//Definition of function destroy. This function deallocates                    *
//memory created from dynamically allocated arrays.                            *
//******************************************************************************
void destroy(DynAry2 *d2){
    
    //deallocate memory
    for(int i=0;i<d2->rows;i++){
        delete []d2->array[i];
    }
    delete []d2->array;
    delete d2;
}
//******************************************************************************
//Definition of function test2. This function verifies if the user             *
//index input and number play by the rules of Sudoku.Which are                 *
//there can be no repeats of number through the row, column, or in the 3x3     *
//boxes.                                                                       *
//******************************************************************************
bool test2(DynAry2 *d2){
    
    //declare variables
    int x,                  //rows
        y,                  //columns
        z,                  //users input for board
        bx,                 //starts for loop at beginning of 3x3 matrix row
        by;                 //starts for loop at beginning of 3x3 matrix column
    
    //input variables
    cout<<"enter index: ";
    cin>>x>>y>>z;
    bx=x-x%3;
    by=y-y%3;
    
    //check if cell is empty
    if(!d2->array[x][y]==0)
        return false;
       
    //check column
    for(int i=0;i<d2->rows;i++)
        if(z==d2->array[x][i])
            return false;
    
    //check row
    for(int i=0;i<d2->cols;i++)
        if(z==d2->array[i][y])
            return false;
    
//    //check box
//    for(int row=0;row<3;row++)
//        for(int col=0;col<3;col++)
//            if(z==d2->array[row+bx][col+by])
//                return false;
   
    for(int i = bx; i < (bx + 3); i++)
        for(int j = by; j < (by + 3); j++)
            if((i != x || j != y) && d2->array[i][j] == z)
                return false;    
      
    
    //rules met
    d2->array[x][y]=z;
    return true;

}
//******************************************************************************
//Definition of *addFile. This function receives the name of the user and their*
//over all score. A nested dynamic structure pointer object is created to store*
//these values into a file.                                                    *
//******************************************************************************
void add2File(string n, char s){
    
    //declare variables
    Player *user=new Player;                //create object from struc
    ofstream inFile;                        //file object
    user->use=new DynAry2;                 //nested struc for enter user name and score
    
    //input name and score to nested struc
     user->use->score=s;
     user->use->name=n;
    
     //open file with in, append and binary modes
    inFile.open("Scores.txt",ios::in|ios::app|ios::binary);
    
    //verify file
     if (!inFile) {
        cout << "Error, file couldn't be opened" << endl; 
        exit(0);//exit function
    } 
    
    //write to file
    inFile<<"NAME: "<<user->use->name<<"\nSCORE: ";
    inFile.write(&user->use->score,sizeof(user->use->score))<<"\n\n";
    
    //close file
    inFile.close();
    
    //deallocate memory
    delete user;
    user=nullptr;
   
}
//******************************************************************************
//Definition of function prnScore. This function copies data from file         *
//into a char array. After that the contents of the array are displayes                                                         *
//******************************************************************************
void file(string n){
    
    //declare variables
    int arraysize = 1000;
    char myArray[arraysize];
    int size = 0;
    int i = 0;

    //open file
    ifstream myfile (n+".txt");

    //get data from file and input it into array
     if (myfile.is_open()){
          while (!myfile.eof()){
            myfile.get(myArray[i]);
            i++;
            size++;
      }   

    //display output      
    for (int i = 0; i <= size; i++)
         cout << myArray[i];
    }
    
    // Random Access File
    myfile.seekg(byteNum(1), ios::beg);
    myfile.read(reinterpret_cast<char *>(&myfile), sizeof(myfile));
    
    //close file
    myfile.close();
}
//******************************************************************************
//Definition of function winOrLose. Determine if player                        *
//has filled in board with at least one life                                   *
//******************************************************************************
bool winOrLose(DynAry2 *d2){
    
   //scan board for blank spaces
    for(int i=0;i<d2->rows;i++){
        for(int j=0;i<d2->cols;j++)
            if(!d2->array[i][j]==0)
                return true;
    }
     return false;   
}
//************************************************************
// Definition of function byteNum. Accepts an integer as *
// its argument. Returns the byte number in the file of the *
// record whose number is passed as the argument. *
//************************************************************
 long byteNum(int recNum)
{
 return sizeof(recNum) * recNum;
}