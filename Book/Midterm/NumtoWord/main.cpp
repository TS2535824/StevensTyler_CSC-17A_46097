/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Determine the gross pay for any number of employee input
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries
#include "prob2.h"

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const string EMPTY = "";
const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
				"Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
				"Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
				"Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
				"Sixty ", "Seventy ", "Eighty ", "Ninety " };


//Function Prototypes
bool fillAry(PayCheck*,int& );
void destroy(PayCheck*);
string numToEng(PayCheck&);
void display(PayCheck*,int);
string numberToWords(unsigned long long int );
string convert2digit(int , string );
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    PayCheck* employee=nullptr;
    int size=1;
    bool stat=true;
    
    //dynamically allocate structure array
    employee=new PayCheck[size]; 
    
    while(stat){
        employee=new PayCheck[size]; 
        stat=fillAry(employee,size);
    }
    
    cout<<size<<endl;
    
    
    destroy(employee);

    //Exit stage right or left!
    return 0;
}
//*****************************************************************
//Definition of function fillAry. This function fills             *
//dynamically allocated structure array with employee information *
//*****************************************************************
bool fillAry(PayCheck *array, int &sizeAry){
    
    //index
    int size=sizeAry-1;
    
    //input variables
    cin.ignore();
    cout<<"Name:         ";
    getline(cin,array[size].emply);
    cout<<"Hours Worked: ";
    cin>>array[size].hours;
    
    //input validation
    if(array[size].hours<0)
        return false;
    cout<<"Pay rate:     ";
    cin>>array[size].pay;
    
    //input validation
    if(array[size].hours<0)
        return false;
    
    
     //Calculate Paycheck
    
    float pay=0,half=0,dble=0;
    
    //straight-time
    if(array[size].hours<=20){
        pay=array[size].pay*array[size].hours;
        
    }
      
    //time and a half
    if(array[size].hours>20&&array[size].hours<40){

    half=(array[size].hours-20)*(array[size].pay*1.5);
    pay=(array[size].pay*20)+half;
    }

    //double time
    if(array[size].hours>40){
        
      half=20*(array[size].pay*1.5);
      dble=(array[size].hours-40)*(array[size].pay*2);
      pay=20*array[size].pay+half+dble;
}
    array[size].check=pay;
    display(array,size);
    
    
    
    sizeAry++;
    return true;
    
}
//*******************************************************************
//Definition of function destroy. This function destroys the array   *
//and free up allocated memory                                      *
//*******************************************************************
void destroy(PayCheck *a){
    
    cout<<"Destroying array "<<endl;
    delete []a;
}
//***********************************************************************
//Definition of function numToEng. This function converts an employees  *
//Pay check into the English equivalent                                 *
//***********************************************************************
string numToEng(PayCheck &array){
    
    //declare variables
    string eng;
    
    //return equivalent
    return eng;
}
void display(PayCheck* user, int i){
    
    cout<<"\n\n\n";
    cout<<"Valley Party Equipment Rentals"<<endl;
    cout<<"27873 Sunny-mead Blvd         "<<endl;
    cout<<user[i].emply<<"               ";
    cout<<showpoint<<setprecision(2)<<fixed;
    cout<<user[i].check<<"$"<<endl;
    cout<<numberToWords(user[i].check)<<"Dollars"<<endl;
    cout<<"\n----------------------------"<<endl;
   
}
// Function to convert single digit or two digit number into words
string convert2digit(int n, string suffix)
{
	// if n is zero
	if (n == 0) {
		return EMPTY;
	}

	// split n if it is more than 19
	if (n > 19) {
		return Y[n / 10] + X[n % 10] + suffix;
	}
	else {
		return X[n] + suffix;
	}
}
// Function to convert a given number (max 9-digits) into words
string numberToWords(unsigned long long int n)
{
	// string to store word representation of given number
	string res;

	// this handles digits at ones & tens place
	res = convert2digit((n % 100), "");

	if (n > 100 && n % 100) {
		res = "and " + res;
	}

	// this handles digit at hundreds place
	res = convert2digit(((n / 100) % 10), "Hundred ") + res;

	// this handles digits at thousands & tens thousands place
	res = convert2digit(((n / 1000) % 100), "Thousand ") + res;

	// this handles digits at hundred thousands & one millions place
	res = convert2digit(((n / 100000) % 100), "Lakh, ") + res;

	// this handles digits at ten millions & hundred millions place
	res = convert2digit((n / 10000000) % 100, "Crore, ") + res;

	// this handles digits at ten millions & hundred millions place
	res = convert2digit((n / 1000000000) % 100, "Billion, ") + res;

	return res;
}
