/* 
 * File:   Employee.cpp
 * Author: Tyler Stevens
 * 
 * Created on July 26, 2019
 */

#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;


//***********************************************************
//Constructor inputs the Name, Job Title and Hourly rate of *
//the employee.                                             *
//***********************************************************
Employee::Employee(char s1[], char s2[], float num){
    
    //using strcpy from cstring libray. strcpy performs no bounds checking
    //The array specified is over flowed in both implementations 
    strcpy(JobTitle, s2);
    strcpy(MyName, s1);

    if(num<0||num>200){
        cout<<"\n Unacceptable Hourly Rate \n";
        HourlyRate=0;
    }
    //set member variable
    else{
        HourlyRate=num;
    }

    //initial member variable values set to zero
    NetPay=0;
    GrossPay=0;
    HoursWorked=0;
    
    
}
//*******************************************************
//setHourly() sets value for member function HourlyRate *
//*******************************************************
float Employee::setHourlyRate(float num)
{
    //input validation
    if(num<0||num>200){
        cout<<"\n Unacceptable Hourly Rate \n";
        HourlyRate=0;
    }
    //set member variable
    else{
        HourlyRate=num;
    }

    return HourlyRate;
}
//*************************************************************
//setHoursWorked() sets value for member function HoursWorked *
//*************************************************************
int Employee::setHoursWorked(int num)
{
    //Input validation
    if(num<0||num>84){
        cout<<"\n Unacceptable Hours Worked \n";
        HoursWorked=0;
    }
    //Set value for member variable HoursWorked
    else{
        HoursWorked=num;
    }

    return HoursWorked;
}

//**********************************************************************
//getGrossPay procedure calculates straight time for hours             *
//worked < 40, time and 1/2 for hours worked < 50 but greater than     *
//40, double time for all hours above 50.  The inputs to this          *
//routine are the hourly rate and the hours worked.                    * 
//**********************************************************************
float Employee::getGrossPay(float pay, int work)
{
    //Straight
    if(work<=40){
        GrossPay=pay*work;
    }
    //Time and a half
    else if(work>40&&work<=50) {
        GrossPay=((40*pay)+((work-40)*pay*1.5));
    }
    //Double time
    else{
        GrossPay=((50*pay)+((work-50)*pay*2));
    }

    return GrossPay;
}
//**********************************************************
//The net pay routine returns the gross pay subtracting    *
//off any taxes.                                           *
//**********************************************************
float Employee::getNetPay(float pay)
{
    //initiate tax to zero percent
    float tax=0;

    //Tax at 10%
    if(pay<=500){
        tax=pay*(0.1);
    }
    //Tax at 20%
    else if(pay>500&&pay<=1000){
        tax=pay*(0.2);
    }
    //Tax at 30%
    else{
        tax=pay*(0.3);
    }

    NetPay=(pay-tax);
    
    return NetPay;
}
//**************************************
//CalculatePay returns the net pay     *
//**************************************
float Employee::CalculatePay(float i, int j)
{
    return getNetPay(getGrossPay(setHourlyRate(i),setHoursWorked(j)));
}
//************************************************
//toString procedure prints all the properties.  *
//************************************************
void Employee::toString()
{
    //Printable
    cout<<"\n Name = "<<MyName<<" Job Title = "<<JobTitle<< ""
            "\n Hourly Rate = "<<HourlyRate<<" Hours Worked = "
            ""<<HoursWorked<<" Gross Pay = "<<GrossPay<< " "
            "Net Pay = "<<NetPay<<" \n";
}

