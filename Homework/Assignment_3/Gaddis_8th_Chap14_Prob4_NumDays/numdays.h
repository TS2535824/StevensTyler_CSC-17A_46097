    
/* 
 * File:   main.cpp
 * Author: Tyler Stevebs
 * Created on July 18 2019
 * Purpose: Number Days Class
 * DISCLAIMER-- PROGRAM WAS RUSHED THORUGH
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays{
    private:
        float hrs;
        float days;
    public:
        NumDays();
        void print();
        NumDays operator+();
        NumDays operator-();
        NumDays operator++();
        NumDays operator--();
};

#endif /* NUMDAYS_H */
