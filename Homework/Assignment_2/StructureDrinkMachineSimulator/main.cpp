/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 7 2019 1:27 PM
 * Purpose:  Soda machine simulator
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include<iomanip>
using namespace std;

//User Libraries

//Structures
struct Machine{
    
    string name;        //name of soda
    float cost;         //cost of soda
    int amount;         //cost of soda
};

//Function prototypes
float change(int);
void displayMenu();

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc
const int TOTAL=5;

//what is inside the soda machine
Machine machine[TOTAL]={{"Cola",75,20},{"Root Beer",75,20},{"Lemon-Lime",75,20},
{"Grape Soda",80,20},{"Cream Soda",80,20}};
    

int main() {

    //declare variables
    string drink;       //users choice of soda
    bool b=true;        //flag for while loop
    float profit=0;     //profit machine makes 
    
    //display menu
    displayMenu();
    
    //loop through soda selection
    while(b){
 
        //get soda choice from user
        getline(cin,drink);
      
       //determine which soda was chosen 
        if(drink=="Cola"){
            profit+=change(0);
        }
        else if(drink=="Root Beer"){
            profit+=change(1);
        }
        else if(drink=="Lemon-Lime"){
            profit+=change(2);
        }
        else if(drink=="Grape Soda"){
            profit+=change(3);
        }
        else if(drink=="Cream Soda"){
            profit+=change(4);
        }
        //exits while loop by making statement false    
        else if(drink=="Quit"){
            b=false;
        }
    } 
    cout<<profit;
    return 0;
}
//********************************************************************
//Definition of function change. This function calculates and display*
//the users change change updates the amount of soda in machine      *
//********************************************************************
float change(int index){
    
    //declare variables
    float cash;         //cash users enters into machines
    float change;       //the change after transaction 
    float profit;       //profit made
    
    //input cash
    cin>>cash;
        
    //input validation
    while(cash<0||cash>100){
        cin>>cash;
    }
    
    //calculate amount left in machine
    machine[index].amount--;
    
    //calculate values
    change=cash-machine[index].cost;
    profit=cash-change;
    
    //display change
    cout<<change<<endl;
    
    //display soda machine menu
    displayMenu();
    
    return profit;
    
}
//*****************************************************************************
//Definition of function displayMenu. This function receives an object array  *
//and display its contents.                                                   *
//*****************************************************************************
void displayMenu(){
    
    //display menu
    cout<<"Cola       "<<machine[0].cost<<"  "<<machine[0].amount;
    cout<<"\nRoot Beer  "<<machine[1].cost<<"  "<<machine[1].amount;
    cout<<"\nLemon-Lime "<<machine[2].cost<<"  "<<machine[2].amount;
    cout<<"\nGrape Soda "<<machine[3].cost<<"  "<<machine[3].amount;
    cout<<"\nCream Soda "<<machine[4].cost<<"  "<<machine[4].amount<<endl;
    cout<<"Quit"<<endl;  
}

