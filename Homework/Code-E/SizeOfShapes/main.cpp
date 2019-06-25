/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 23 2019 9:13 PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void evenBackslash(unsigned short);
void evenForwardslash(unsigned short);
void xtreme(unsigned short);
void oddBackslash(unsigned short);
void oddForwardslash(unsigned short);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape according the value [descending or ascending according to even or odd x value]
    switch(shape){
        case 'x':
            xtreme(x);
            break;
        case 'b':
            if(x%2==0)
                evenBackslash(x);
            else
                oddBackslash(x);
            break;
        case 'f':
            if(x%2==0)
                evenForwardslash(x);
            else
                oddForwardslash(x);
            break;   
        default:
            cout<<"Not a valid shape"<<endl;
            break;
    }
    //Exit
    return 0;
}
//**************************************************************************
//Definition of function oddBackslash. This function prints or a backslash *
//by starting a value x and descending down to 1.                          *
//**************************************************************************
void oddBackslash(unsigned short x){
    
    //track a number that starts at a value of x and decreases as loop iterates 
    unsigned short track=x;
    
    //nested for loop
    for(int row=1;row<=x;row++){
        
        for(int col=1;col<=x;col++){
            
            if(row==col){
                
                //print out correct value
                cout<<track;
                track--;
            //otherwise print out space   
            }else 
                cout<<" ";
        }
        //skip to the next line
        cout<<endl;
    } 
}
//**************************************************************************
//Definition of function oddBackslash. This function prints or a backslash *
//by starting a value 1 and ascending up to a value x.                     *
//**************************************************************************
void evenBackslash(unsigned short x){
    
    //nested for loop for printing out numbers 
    for(int row=1;row<=x;row++){
        
        for(int col=1;col<=x;col++){
            
            if(row==col){
                //print out the number when the row and colum are equal
                cout<<row;
                
            //print blank space    
            }else 
                cout<<" ";
        }
        //skip to the next line
        cout<<endl;
    } 
}
//******************************************************************************
//Definition of the function evenForwardslash. This function receives an even   *
//number and prints out a descending forward slash shape with the given x value. *
//******************************************************************************
void evenForwardslash(unsigned short x){
    
    //track a number that starts at a value of x and decreases as loop iterates 
    unsigned short track=x;
    
        //nested for loop for printing out numbers
        for(int row=x;row>=1;row--){
            
            for(int col=x;col>=1;col--){
                
                //determine spot to print out value
                if(col==(x-row+1)){
                    cout<<track;//print the tracked value in correct spot
                    track--;//iterate tracked value
                    
                //otherwise print out blank space    
                }else
                    cout<<" ";
                
            //skip to the next line  
            }cout<<endl;
        } 
}
//******************************************************************************
//Definition of the function oddForwardslash. This function receives an odd     *
//number and prints out a ascending forward slash shape with the given x value. *
//******************************************************************************
void oddForwardslash(unsigned short x){
    
     //nested for loop for printing out numbers
    for(int row=x;row>=1;row--){
        
        for(int col=x;col>=1;col--){
                
            //print out correct number
            if(col==(x-row+1)){
                cout<<col; 
                
            //otherwise print blank space.   
            }else
                cout<<" ";
        //skip ti the next line.
        }cout<<endl;
    } 
}
//******************************************************************************
//Definition of xtreme function. This function prints out and x shape           *
//which with a given x value and either has the even or odd number ascending or *
//descending.                                                                   *
//******************************************************************************
void xtreme(unsigned short x){
    
    //track a number that starts at a value of x and decreases as loop iterates 
    unsigned short track=x;
    
    //nested for loop
    for(int row=1;row<=x;row++){
        for(int col=1;col<=x;col++){
            if(row==col){
                //determine whether value is even
                if(x%2==0){
                    cout<<col;
                }else{
                    cout<<track;
                    track--; //iterate tracked value
                }
            }else if (col==(x+1)-row){
                if(x%2==0){
                    cout<<track;
                    track--;
                }else
                    cout<<row;
            }else
                cout<<" ";
        }
        cout<<endl;
    }  
}

