/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductionWorker.h
 * Author: steve
 *
 * Created on July 21, 2019, 7:21 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"           //inherit from super class

class ProductionWorker : public Employee {
    
private:
    int shift;
    float hours;
public:
    //Default Constructor
    ProductionWorker();
    
    //Constructor
    ProductionWorker(int,float,string,string,int);
    
    //setters defined in production worker.cpp
    void setShift(int);
    void setHours(float);
    
    //in line getters
    int getShift()
        {return shift;}
    float getHours()
        {return hours;}
    
};

#endif /* PRODUCTIONWORKER_H */

