/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2019, 3:29 PM
 * Purpose: Create a Chess game
 */

#include <iostream>
#include <vector>

using namespace std;

//user Libraries
#include "GamePiece.h"
#include "Tree.h"
#include "FeetInches.h"

//function prototypes
void WhoGoes();
void DisplayRules();
//***********************************************************
// Templates definitions                                    *
// Min template accepts two arguments and returns the       *
// value of the argumet that is the lesser of the two.      *
//***********************************************************
template <class T>
T Min(T num1, T num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}
//**********************************************************
// Max template accepts two arguments and returns the      *
// value of the argument that is the greater of the two.    *
//**********************************************************
template <class T>
T Max(T num1, T num2)
{
    if (num1 > num2)
            return num1;
    else
            return num2;
}
int main() {
    //declare variables
    bool cont=true;
    int choice;
    int x,y;            //index for piece position
    int nx,ny;   
    
    WhoGoes();  
    DisplayRules();
    GamePiece play;
    play.print();
    while(cont){
        x=0,y=0,nx=0,ny=0;
        cout<<"Player one's turn\n"<<endl;
        cin>>x>>y>>nx>>ny;
        if(x==-1||y==-1||nx==-1||ny==-1)
            return 0;
        play.setItems(x,y,nx,ny);
        play.TryMove(x,y,nx,ny);
        system("clear");
        play.print();
        
        cout<<"Player two's turn\n"<<endl;
        cin>>x>>y>>nx>>ny;
        if(x==-1||y==-1||nx==-1||ny==-1)
            return 0;
        play.setItems(x,y,nx,ny);
        play.TryMove(x,y,nx,ny);
        system("clear");
        play.print();
    }
    

    return 0;
}
//******************************************************************************
//definition of WhoGoes(). Based on the users age and height, this function will
//tell the user who gets to play as the white pieces and which gets the black.
//******************************************************************************
void WhoGoes(){ 
    
    //vector for holding user information
     vector<int> vect;
     int feet, inches;  // To hold input for feet and inches

   // Create three FeetInches objects. The default arguments
   // for the constructor will be used.
   FeetInches first, second, third;

   // Get a distance from the user.
   cout << "Enter player ones height in feet and inches: ";
   cin >> feet >> inches;
   
   //insert data inside vector
   vect.push_back(feet);
   vect.push_back(inches);

   // Store the distance in the first object.
   first.setFeet(feet);
   first.setInches(inches);

   // Get another distance from the user.
   cout << "Enter player two's height in feet and inches: ";
   cin >> feet >> inches;
   
    //insert data inside vector
   vect.push_back(feet);
   vect.push_back(inches);

   // Store the distance in second.
   second.setFeet(feet);
   second.setInches(inches);
   


   // Assign first + second to third.
   third = first + second;

   // Display the result.
   cout << "first + second = ";
   cout << third.getFeet() << " feet, ";
   cout << third.getInches() << " inches.\n";

   // Assign first - second to third.
   third = first - second;

   // Display the result.
   cout << "first - second = ";
   cout << third.getFeet() << " feet, ";
   cout << third.getInches() << " inches.\n";
   int age1,age2;
    
    cout<<"Player one please enter your age: ";
    cin>>age1;
    
    cout<<"Player two please enter your age: ";
    cin>>age2;
    
    //Insert data inside vector function
    vect.push_back(age1);
    vect.push_back(age1);
    
    
    
    if(min(age1,age2)==age1){
        cout<<"Player one is the youngest and will be Black"<<endl;
        
    }
    if(min(age1,age2)==age2){
        cout<<"Player two is the youngest and will be Black"<<endl;
    } 
    else
        cout<<"Player one is the youngest and will be Black"<<endl;
        
        
}
//**************************************************************************
//Definition of displayRules(). This function display each chess pieces role 
//in the game by using abstract classes and copying constructors
//***************************************************************************
void DisplayRules(){
    //abstract class
    pawn p;
    rook r;
    knight n;
    bishop b;
    queen q;
    king k;
    abstract *abby1=&p;
    abstract *abby2=&r;
    abstract *abby3=&n;
    abstract *abby4=&b;
    abstract *abby5=&q;
    abstract *abby6=&k;
    abby1->type();
    abby2->type();
    abby3->type();
    abby4->type();
    abby5->type();
    abby6->type();
}
