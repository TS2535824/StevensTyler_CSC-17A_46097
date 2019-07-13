/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on June 17th, 2019, 10:20 AM
 * Purpose:  Menu using Functions,
 *           extend for midterm
 */

//System Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries
#include "Prob1.h"
#include "prob2.h"
#include "prob7.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions and 1D Sometimes 
const string EMPTY = "";
const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
				"Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
				"Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
				"Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
				"Sixty ", "Seventy ", "Eighty ", "Ninety " };


//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();

//problem 1 prototypes
void createAccount();
void destroy(DynAry*);
void displayObject(DynAry*,int);
void fillAry(DynAry*, int);
void update(DynAry*,string);
bool countDigits(string);
bool verifyAccount(string&);
int getAccountNumber();

//problem 2 prototypes
bool fillAry(PayCheck*,int& );
void destroy(PayCheck*);
string numToEng(PayCheck&);
void display(PayCheck*,int);
string numberToWords(int );
string convert2digit(int , string );

//problem 4 prototypes
int convert2Int(char);
void displayCode(int[]);
bool flags(int []);
void encrypt(int []);
void decrypt(int []);

//problem 5 prototype
long double factorial(int n);

//problem 7 prototypes 
Primes *factor(int);
void prntPrm(Primes *);

//
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            case '7':{prblm7();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='7');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl; 
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type 7 for Problem 7"<<endl<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
     //declare variables
    DynAry* user=nullptr;
    bool status1;
    string account;
    
    //verify account
    status1=verifyAccount(account);
    
    //new account user
    if(status1){
        
        //determine number of accounts then add one
        //then use number to dynamically allocate array
        user=new DynAry[3];     
        cout<<"New User"<<endl;
        
        user[2].accNum=account;
        fillAry(user,3);
        displayObject(user,2);
        update(user,account);
        displayObject(user,2);
        
    }
    //old account user
    else{
        
        //dynamically allocate structure array
        user=new DynAry[2]; 
        
        //display user account number
        cout<<"Old user account number: ";
        cout<<account<<endl;
        
        //fill structure array with user information
        fillAry(user,2);
        
        
        //determine which of the two old users to update 
        if(account=="12345"){
            //display current account information
            displayObject(user,0);
            
            //update account information
            update(user,account);
            
            //display updates account information
            displayObject(user,0);
        }
        else{
            //display current account information
             displayObject(user,1);
             
             //update account information
             update(user,account);
             
             //display updated account information
             displayObject(user,1);
        }
           
    }
    
    
    //delete array
   // destroy(user);
}
//Prob 1 function8888888888888888888888888888888888888888888888888888888888888888888888
//**********************************************************************
//Definition of function fillAry. This function determine which user   *
//the program is dealing with and fills the array accordingly          *
//**********************************************************************
void fillAry(DynAry *user, int size){
    
    //user names
    user[0].name="Tyler Stevens";
    user[1].name="Christina White";
    
    //users address
    user[0].address="10767 Made-up Lane";
    user[1].address="27134 Nowhere Drive";
    
    //users account number
    user[0].accNum="12345";
    user[1].accNum="67891";
    
    //balance
    user[0].balance=4000;
    user[1].balance=1000000;
    
    
    //fill array with the new users account information
    if(size>2){
        
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,user[2].name);
        cout<<"Enter address: ";
        getline(cin,user[2].address);
        cout<<"Enter balance: ";
        cin>>user[2].balance;
       
    }
    
    //initial value for all user when program begins
    for(int i=0;i<size;i++){
        
        user[i].checks=0;
        user[i].deposits=0;
        
    }
    //formatting purposes
    cout<<"\n\n\n";

}
//********************************************************************************
//Definition of function verifyAccount. This function determine if account exists*
//if not it will ask user to either create one or exit program                   *
//********************************************************************************
bool verifyAccount(string &account){
    
    
    //declare variables
    char choice;            //user choice to continue or terminate program
    
    
    
    //determine account number. it must be 5 digits long or 
    //program will not continue
    while(countDigits(account)){
    cout<<"\nEnter account number(must be five digits long): ";
    cin>>account;
    }
  
    //determine if new or old user
    if(account=="12345"){
        return false;
    }
    else if(account=="67891"){
        return false;
    }
    else{
        
        //have user create new account or exit
        cout<<"Account not found, would you like to create one? y/n: ";
        cin>>choice;
        
        if(choice=='y'){
           
            return true;
        }
        else {
            cout<<"Exiting Program."<<endl;
             exit(0);
            
        }     
    }   
}
//**************************************************************
//Definition of function displayObject. This function display  *
// The users account information;                              *
//**************************************************************
void displayObject(DynAry *user, int i){
    
    cout<<"Name:                       "<<user[i].name<<endl;
    cout<<"Address:                    "<<user[i].address<<endl;
    cout<<"Account Number:             "<<user[i].accNum<<endl;
    cout<<"Balance:                    "<<user[i].balance<<endl;
    cout<<"Checks written:             "<<user[i].checks<<endl;
    cout<<"Total deposited:            "<<user[i].deposits<<endl;
    cout<<"\n\n\n";
    
}
//**********************************************************************
//Definition of function update. This function updates the user        *
//account information and allows then to deposit and withdraw money    *
//from account                                                         *
//**********************************************************************
void update(DynAry *user, string account){
    
    //declare variables
    int index,              //index position for users account
        total=0;            //what the user is either withdrawing or depositing 
    bool status=true;       //determine when to exit out of do while loop
     
    //determine user/index
    if(account=="12345"){
        index=0;
    }
    else if(account=="67891"){
        index=1;
    }
    else{
        index=2;
    }
    
    
    //loop through users choices
    cout<<"Welcome "<<user[index].name<<endl;
    do{
        
        total=0;
        int swtch;
        cout<<"Deposit? Enter 1. Write check? Enter 2. Exit? Enter any key: ";
        cin>>swtch;
        
        switch(swtch){
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>total;
                user[index].deposits+=total;
                break;
            case 2:
                cout<<"Enter check amount: ";
                cin>>total;
                user[index].checks+=total;
                break;
            default:
                status=false;
            
        }
        
    }while(status);
    
    
    //update and charge fee if overdrawn
    user[index].balance+=user[index].deposits;
    user[index].balance-=user[index].checks;
    if(user[index].balance<0){
        cout<<"Account overdrawn, you know owe an additional 20$."<<endl;
        user[index].balance-=20;
    }
    
    //formatting purposes
    cout<<"\n\n\n";
    
}
//***********************************************************************
//Defintion of function countDigits. This function determines how many  *
//digits are in the account number the user enters.                     *
//***********************************************************************
bool countDigits(string account){
  
  //start number of digits at zero  
  int count=0;
  for(int i=0;i<sizeof(account);i++)
     if(isdigit(account[i])) count++;
  
  if(count==5){
      return false;
  }
  return true;

}
//*******************************************************************
//Definition of function destroy. This function destroys the array   *
//and free up allocated memory                                      *
//*******************************************************************
void destroy(DynAry *a){
    delete a;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    cout<<"Problem 2"<<endl;
     //Set the random number seed
    
    //Declare Variables
    PayCheck* employee=nullptr;
    int size=1;
    bool stat=true;
    
    //dynamically allocate structure array
    employee=new PayCheck[size]; 
    
    cout<<"Press Enter to Start...";
    
    while(stat){
        employee=new PayCheck[size]; 
        stat=fillAry(employee,size);
    }
    
    cout<<size<<endl;
    
    
    destroy(employee);
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
    
    if(user[i].check>999999){
        cout<<"You made over One Million Dollars, there must be an error..."<<endl;
        cout<<"Sign Below                    "<<endl;
        cout<<"\n----------------------------"<<endl;
        exit(0);
    }
    cout<<numberToWords(user[i].check)<<"Dollars"<<endl;
    cout<<"Sign Below                    "<<endl;
    cout<<"\n----------------------------"<<endl;
   
}
//**********************************************************************
//Definition of function convert2digit this function converts single   *
//digit or two digit number into words                                 *
//**********************************************************************
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
//***********************************************************************
//Definition of function numberToWords. This function converts a given  *
//number (max 9-digits) into words
//***********************************************************************
string numberToWords(int n)
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
	res = convert2digit(((n / 100000) % 100), "Hundred, ") + res;

		return res;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    cout<<"Problem 3 is included in another project"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"problem 4"<<endl;
    //Set the random number seed
    
    //Declare Variables
    char charAry[5];
    int array[5];
    bool flag=true;
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter four digit integers(0-7): ";
    cin>>charAry;
   
    
    //convert char to string
    for(int i=0;i<5;i++){
        
        array[i]=convert2Int(charAry[i]);
    }
    
    //check for eights and nines
    flag=flags(array);
    
    }while(flag);
    
    
    //display code   
    cout<<"Original..."<<endl;
    displayCode(array);
    
    cout<<"Encrypted..."<<endl;
    encrypt(array);
    displayCode(array);
    
    cout<<"Decrypted..."<<endl;
    decrypt(array);
    displayCode(array);
    

    //Exit stage right or left!
}
//***************************************************************
//Definition of function convert2Int. This function receives a  *
//char and converts it to an integer.                           *
//***************************************************************
int convert2Int(char character){
    return character-'0';
}
//************************************************************
//Definition of function displayCode. This function display  *
//contents of array and flags 8 and 9                        *
//************************************************************
void displayCode(int array[]){
    
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//************************************************************
//Definition if function flags. This function determines if  *
//there is an 8 or 9 inside array.                           *
//************************************************************
bool flags(int a[]){
    
    for(int i=0;i<5;i++){
        if(a[i]==9||a[i]==8){
            cout<<"8 and 9 are invalid entries, try again..."<<endl;
            return true;
        }
    }
    return false;
}
//**********************************************************************
//Definition of encrypt. This function takes the sum of array index    *
// and adds 5%8 to each. Then swaps index 0 with index 2 and           *
//index 1 with index 3.                                                *
//**********************************************************************
void encrypt( int a[]){

    //Replace each digit by the sum of that digit plus 5 modulus 8. 
    for(int i=0;i<5;i++){
        a[i]+=(5%8);   
    }
    
    //initialize swap variables
    int swap0=a[0],
        swap1=a[1],
        swap2=a[2],
        swap3=a[3];
    
        //swap
        a[0]=swap2;
        a[1]=swap3;
        a[2]=swap0;
        a[3]=swap1;
     
}
//********************************************************************
//Definition of decrypt. This function takes the sum of array index  *
// and subtracts 5%8 to each. Then swaps index 2 with index 0 and    *
//index 3 with index 1.                                              *
//********************************************************************
void decrypt( int a[]){

    //Replace each digit by the sum of that digit plus 5 modulus 8. 
    for(int i=0;i<5;i++){
        a[i]-=(5%8);   
    }
    
    //initialize swap variables
    int swap0=a[0],
        swap1=a[1],
        swap2=a[2],
        swap3=a[3];
    
        //swap
        a[0]=swap2;
        a[1]=swap3;
        a[2]=swap0;
        a[3]=swap1;
     
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 5
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    cout<<"Problem 5"<<endl;
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
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 6
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm6(){
    cout<<"Problem 6"<<endl;
    cout<<"DECIMAL           BINARY                OCTAL               HEX                 FLOATING POINT"<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"2.875            10.111                 2.7                  2.E                5C0000E9      "<<endl;
    cout<<"0.1796875        0.0010111              0.134                0.2E               5C0000E8      "<<endl;
    cout<<"-2.875           -10.111                -2.7                 -2.E               DC0000E8      "<<endl;
    cout<<"-0.1796875       -0.0010111             -0.134               -0.2E              DC0000E9      "<<endl;
    cout<<"1503238401                                                                      59999901      "<<endl;
    cout<<"1503238402                                                                      59999902      "<<endl;
    cout<<"2791729150                                                                      A66667FE      "<<endl;
            
    
     
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 7
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm7(){
    cout<<"Problem 7"<<endl;
      //Declaration of Variables
    int n;
    cout<<"Enter an integer between 2 and 10000: ";
    cin>>n;
    
    //input validation
    while(n<2||n>=10000){
        cout<<"INVAILD"<<endl;
        cout<<"Enter an integer between 2 and 10000: ";
        cin>>n;
    }
    
    prntPrm(factor(n));

    //Exit Program
     
}
//***********************************************************************
//Definition of function Primes. This function receives a integer and   *
//factors it into its primes                                            *
//***********************************************************************
Primes *factor(int n){
    
     //Declare variables and fill
    Primes *p=new Primes;        //a pointer to a structure
    p->prime=new Prime[50];      //a pointer to a pointer array
    p->nPrimes=n;               //set to initial value from use that will be factored
    int incre=2;                //prime numbers start at 2
    
    
    //find prime numbers
    for(int i=0;i<50;i++){

        while(n%incre==0){//while there is no remainder
            
            p->prime[i].prime=incre;
            p->prime[i].power++;
            n=n/incre;
            
        } 
        incre++;
    }
    
    return p;
}
//******************************************************************
//Definition of function printPrm, This function output the number *
//and it's primes -> 120 = 2^3 * 3^1 * 5^1                         *
//******************************************************************
void prntPrm(Primes *f){

    //display results
    cout<<f->nPrimes<<" = ";
    for(int i=0;i<50;i++){
        
        if(!f->prime[i].prime==0){
            cout<<f->prime[i].prime<<"^"<<f->prime[i].power<<" * ";  
        }        
    }
}
