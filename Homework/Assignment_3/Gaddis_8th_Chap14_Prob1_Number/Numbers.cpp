/* 
 * File:   Numbers.cpp
 * Author: Tyler Stevens
 * Created on July 18, 2019, 8:21 PM
 * Purpose Design a class Numbers that can be used to translate whole dollar amounts in the range
           0 through 9999 into an English description of the number
 */

#include "Numbers.h"
#include <iostream> //Main Library
#include <string>   //String Library
#include "numbers.h"    //User Library Numbers
using namespace std;

//***************************************************************
//Numbers default constructor sets member variable equal to zero*
//***************************************************************
Numbers::Numbers(){
    numbr=0;
}

//**********************************************************
//Print determines how to display integer into plan English*
//**********************************************************
void Numbers::print(){
    //Declare Object
    Numbers n;
    
    //Declare all Variables
    string a,b,c,d,e;
    
    //Input data
    cout<<"Number: ";
    do{
    cin>>n.numbr;
    cout<<n.numbr<<endl;
    if(n.numbr<0||n.numbr>=10000){
        cout<<"Number Must be between 0 and 9999"<<endl;
    }
    }while(n.numbr<0||n.numbr>=10000);
    
    //Number Word Conversion
    a=(n.numbr%10000>=1000&&n.numbr%10000<=1999)?"One Thousand ":
      (n.numbr%10000>=2000&&n.numbr%10000<=2999)?"Two Thousand ":
      (n.numbr%10000>=3000&&n.numbr%10000<=3999)?"Three Thousand ":
      (n.numbr%10000>=4000&&n.numbr%10000<=4999)?"Four Thousand ":
      (n.numbr%10000>=5000&&n.numbr%10000<=5999)?"Five Thousand ":
      (n.numbr%10000>=6000&&n.numbr%10000<=6999)?"Six Thousand ":
      (n.numbr%10000>=7000&&n.numbr%10000<=7999)?"Seven Thousand ":
      (n.numbr%10000>=8000&&n.numbr%10000<=8999)?"Eight Thousand ":
      (n.numbr%10000>=9000&&n.numbr%10000<=9999)?"Nine Thousand ":"";
              
    b=(n.numbr%1000>=100&&n.numbr%1000<=199)?"One Hundred ":
      (n.numbr%1000>=200&&n.numbr%1000<=299)?"Two Hundred ":
      (n.numbr%1000>=300&&n.numbr%1000<=399)?"Three Hundred ":
      (n.numbr%1000>=400&&n.numbr%1000<=499)?"Four Hundred ":
      (n.numbr%1000>=500&&n.numbr%1000<=599)?"Five Hundred ":
      (n.numbr%1000>=600&&n.numbr%1000<=699)?"Six Hundred ":
      (n.numbr%1000>=700&&n.numbr%1000<=799)?"Seven Hundred ":
      (n.numbr%1000>=800&&n.numbr%1000<=899)?"Eight Hundred ":
      (n.numbr%1000>=900&&n.numbr%1000<=999)?"Nine Hundred ":"";

    c=(n.numbr%100==10)?"Ten ":
      (n.numbr%100==11)?"Eleven ":
      (n.numbr%100==12)?"Twelve ":
      (n.numbr%100==13)?"Thirteen ":
      (n.numbr%100==14)?"Fourteen ":
      (n.numbr%100==15)?"Fifteen ":
      (n.numbr%100==16)?"Sixteen ":
      (n.numbr%100==17)?"Seventeen ":
      (n.numbr%100==18)?"Eighteen ":
      (n.numbr%100==19)?"Nineteen ":
      (n.numbr%100>=20&&n.numbr%100<=29)?"Twenty ":
      (n.numbr%100>=30&&n.numbr%100<=39)?"Thirty ":
      (n.numbr%100>=40&&n.numbr%100<=49)?"Forty ":
      (n.numbr%100>=50&&n.numbr%100<=59)?"Fifty ":
      (n.numbr%100>=60&&n.numbr%100<=69)?"Sixty ":
      (n.numbr%100>=70&&n.numbr%100<=79)?"Seventy ":
      (n.numbr%100>=80&&n.numbr%100<=89)?"Eighty ":
      (n.numbr%100>=90&&n.numbr%100<=99)?"Ninety ":"";

    d=(n.numbr%10==1&&n.numbr%100!=11)?"One ":
      (n.numbr%10==2&&n.numbr%100!=12)?"Two ":
      (n.numbr%10==3&&n.numbr%100!=13)?"Three ":
      (n.numbr%10==4&&n.numbr%100!=14)?"Four ":
      (n.numbr%10==5&&n.numbr%100!=15)?"Five ":
      (n.numbr%10==6&&n.numbr%100!=16)?"Six ":
      (n.numbr%10==7&&n.numbr%100!=17)?"Seven ":
      (n.numbr%10==8&&n.numbr%100!=18)?"Eight ":
      (n.numbr%10==9&&n.numbr%100!=19)?"Nine ":"";

    e=(n.numbr==0)?"Zero ":"";
    
    cout<<"Number: "<<a<<b<<c<<d<<e<<endl;
    
}


