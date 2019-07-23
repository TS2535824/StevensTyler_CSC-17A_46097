/* 
 * File:   Numbers.cpp
 * Author: Tyler Stevens
 * Created on July 18, 2019, 8:21 PM
 * Purpose Design a class Numbers that can be used to translate whole dollar amounts in the range
           0 through 9999 into an English description of the number
 */
#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>

#include <string>   //String Library
using namespace std;

class Numbers{
    private:
        int numbr; 
        string lessThan20; 
        string thousand; 
   public:
        Numbers();             // constructor
        void print();
};

#endif /* NUMBERS_H */

