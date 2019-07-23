/* 
 * File:   numbers.cpp
 * Author: Tyler Stevens
 * Created on July 21, 2019, 11:28 AM
 * Purpose:
 */
#include "numbers.h"
#include <string>
#include <iostream>
using namespace std;


//***********************************************************
//Constructor accepts a nonnegative integer and uses it to  *
//initialize the Numbers object                             *
//***********************************************************
numbers::numbers(int n){
    ////do not accept negative a values
    if(n>0)
        nums=n;
    
}
//******************************************************
//prints the English description of the Numbers object.*
//******************************************************
void numbers::print(){

    int a,b,c,d,e;
//    static string hundred="hundred";
//    static string thousand="thousand";
//    static string lessThan20[20]={"zero", "one", "two","three"
//        ,"four","five","six","seven","eight","nine","ten","eleven","twelve",
//        "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen", "nineteen"};
    int n=nums;
    
   
}
const string numbers::lessThan20[]={"zero", "one", "two","three"
        ,"four","five","six","seven","eight","nine","ten","eleven","twelve",
        "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen", "nineteen"};

const string numbers::tens[]={"zero","ten","twenty","thirty","forty","fifty",
                             "sixty","seventy","eighty","ninety"};