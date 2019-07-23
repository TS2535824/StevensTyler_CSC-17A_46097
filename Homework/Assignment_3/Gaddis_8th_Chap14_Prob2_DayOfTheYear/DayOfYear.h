/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  write a class named DayOfYear that takes an integer
             representing a day of the year and translates it to a string
 *           consisting of the month
             followed by day of the month.
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>

using namespace std;

class DayOfYear {
    protected:
        int num; //Inputed Number to translate to Day in year
        static std::string const mnth[12]; //String for Month Names
    public:
       DayOfYear();
       void getDate();
       void print();
    

};

#endif /* DAYOFYEAR_H */

