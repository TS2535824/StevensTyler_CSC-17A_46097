/* 
   File:   main
   Author: Tyler Stevens
   Created on 
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Fomratting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
long double factorial(int n);

//Execution Begins Here!
int main()
{
    //declare variables
    int ch,
        unChr,
        in,
        unInt,
        sh,
        unSh=0,
        lng=0,
        unLng=0,flt,dble;
            
    
    //signed char -128 to 127
    for(int i=1;i<50;i++){
        
        if(factorial(i)<127){
            ch=i;
        }
    }
    
    //unsigned char	1 byte	0 to 255
    for(int i=1;i<100;i++){
        cout<<fixed<<showpoint<<setprecision(1);
       // cout<<i<<"! = "<<factorial(i)<<endl;
        if(factorial(i)<255){
           unChr=i;
        }
    }
    
    //int -2,147,483,648 to 2,147,483,647
    for(int i=1;i<100;i++){
        
        if(factorial(i)<2147483647){
            in=i;
        } 
    }
    
    //unsigned int 0 to 4,294,967,295
    for(int i=1;i<100;i++){
        
        if(factorial(i)<4294967295){
            unInt=i;
        }
    }
    
    //short -32,768 to 32,767
    for(int i=1;i<100;i++){
        
        if(factorial(i)<32767){
            sh=i;
        }
    }
    
    //unsigned short 0 to 65,535
    for(int i=1;i<100;i++){
        
        if(factorial(i)<65535){
            unSh=i;
        }
    }
    //long -9223372036854775808 to 9223372036854775807
    for(int i=1;i<100;i++){
        
        if(factorial(i)<=9223372036854775807){
            lng=i;
        }
    }
    
    //float 1.2E-38 to 3.4E+38
    for(int i=1;i<=100;i++){
        
        if(factorial(i)<=3.4E+38){
            flt=i;
        }
    }
    
    //double 2.3E-308 to 1.7E+308
    for(int i=1;i<=171;i++){
        
        if(factorial(i)<=1.7E+308){
            dble=i;
        }
    }

    
    cout<<"TYPE                        LARGEST n!"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"char                        "<<ch<<endl;
    cout<<"unsigned char               "<<unChr<<endl;
    cout<<"int                         "<<in<<endl;
    cout<<"unsigned int                "<<unInt<<endl;
    cout<<"short                       "<<sh<<endl;
    cout<<"unsigned short              "<<unSh<<endl;
    cout<<"long                        "<<lng<<endl;
    cout<<"float                       "<<flt<<endl;
    cout<<"double                      "<<dble<<endl;

    
    return 0;
}
//*****************************************************************************
//Definition of factorial function .This function excepts an int and returns  *
//its factorial.                                                              *
//*****************************************************************************
long double factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}