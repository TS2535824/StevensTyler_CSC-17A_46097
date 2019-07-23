
/* 
 * File:   Employee.h
 * Author: Tyler Stevens
 *
 * Created on July 21, 2019, 5:52 PM
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

//super class
class Employee {
    
protected:
    string name,            //Name of employee
           dateHired;       //Date employee was hired
    int num;                //Employee number
    
public:
    
    //Default Constructor
    Employee();
    
    //Constructor
    Employee(string,string,int);
    
    //Mutators defined in Employee.cpp
    void setName(string);
    void setDateHired(string);
    void setNum(int);
    
    //In-line getters
    string getName() const
        {return name;}
    
    string getDateHired()const
        {return dateHired;}
    
    int getNum()const
        {return num;}

};

#endif /* EMPLOYEE_H */

