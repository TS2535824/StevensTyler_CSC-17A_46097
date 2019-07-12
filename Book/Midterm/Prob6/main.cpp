/* 
   File:   main
   Author: Tyler Stevens
   Created on July 7 2019
   Purpose:  Convert decimal to octal and hex. Also convert to floating 
 *           point.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    cout<<"DECIMAL           BINARY                OCTAL               HEX                 FLOATING POINT"<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"2.875            10.111                 2.7                  2.E                5C0000E9      "<<endl;
    cout<<"0.1796875        0.0010111              0.134                0.2E               5C0000E8      "<<endl;
    cout<<"-2.875           -10.111                -2.7                 -2.E               DC0000E8      "<<endl;
    cout<<"-0.1796875       -0.0010111             -0.134               -0.2E              DC0000E9      "<<endl;
    cout<<"1503238401                                                                      59999901      "<<endl;
    cout<<"1503238402                                                                      59999902      "<<endl;
    cout<<"2791729150                                                                      A66667FE      "<<endl;
            
    

    //Exit Program
      return 0;
}
