/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   milTime.h
 * Author: steve
 *
 * Created on July 22, 2019, 11:41 AM
 */

#ifndef MILTIME_H
#define MILTIME_H

#include "Time.h"

class milTime : public Time {
private:
    int milHours;
    int milSeconds;
public:
    //Constructor defined in milTime.cpp
    milTime(int,int);
    
    //setters defined in milTime.cpp
    void setTime(int,int);
    
    //returns the hour in military format
    int getMilHour()
    {return milHours;}
    
    //returns the hour in standard format
    int getStandHr()
    {return hour%12;}
    
    //Exceptions
    class BadHour{
        
    };
    class BadSeconds{
        
    };
            
};

#endif /* MILTIME_H */


