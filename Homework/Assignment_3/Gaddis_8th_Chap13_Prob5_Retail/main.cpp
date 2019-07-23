/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Display a stores inventory
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>

#include "Retail.h"
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    string n;
    int u;
    float p;
    
    Retail item1("Jacket",12,59.95);
    Retail item2("Designer Jeans",40,35.95);
    Retail item3("Shirt",20,24.95);
    
    
    
    
    
    //Display the outputs
    cout<<"                                      Units"<<endl;
    cout<<"             Description              On Hand                Price"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"Item #1      "<<item1.getDescrip()<<"                   "<<item1.getUnits()<<"                     "<<item1.getPrice()<<endl;
    cout<<"Item #2      "<<item2.getDescrip()<<"           "<<item2.getUnits()<<"                     "<<item2.getPrice()<<endl;
    cout<<"Item #3      "<<item3.getDescrip()<<"                    "<<item3.getUnits()<<"                     "<<item3.getPrice()<<endl;
  

    //Exit stage right or left!
    return 0;
}