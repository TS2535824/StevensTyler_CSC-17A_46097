/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 8 2019
 * Purpose:  Enter sales for each division
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
using namespace std;

//User Libraries


//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int SIZE=4;

//structures
struct data{
    static string div[SIZE];
    float quart[SIZE];
    float quartSale;
};

string data::div[SIZE]= {"East ", "West ", "North ", "South "};

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    data sales;
    
    //create file
    fstream file("salesfigures.txt",ios::out|ios::binary);
    
    //check file
    if(!file){
        cout<<"Error"<<endl;
        return 0;
    }
    
    //Initialize or input i.e. set variable values
    cout<<"Enter quarterly sales"<<endl;
    
    for(int x=0;x<SIZE;x++){
        
        //display division
        cout<<sales.div[x]<<"Division: "<<endl;
        
        for(int y=0;y<SIZE;y++){
            
            do{
                //display quarterly sales
                cout<<"Quarterly: "<<(y+1)<<": ";
                cin>>sales.quartSale;
                
                //input validation
                if(sales.quartSale<0){
                    cout<<"invalid entry"<<endl;
                }
            }while(sales.quartSale<0);
            sales.quart[y]=sales.quartSale;
        }
        file.write(reinterpret_cast<char *>(&sales), sizeof(sales));
    }
    
    
    //close file
    file.close();

    //Exit stage right or left!
    return 0;
}