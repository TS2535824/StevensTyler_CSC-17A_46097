/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Class of setter and getter for month, day, and year
 *           Display in formates 12/25/2014, December 25, 2014 and 
 *           25 December 2014.
 */

#ifndef DATE_H
#define DATE_H

class Date {
     private:
        unsigned int day;
        unsigned int month;
        unsigned int year;
        
    public:
        void setDay(unsigned int);
        void setMonth(unsigned int);
        void setYear(unsigned int);
        void display1();
        void display2();
        void display3();
    
    //In-line member functions
    unsigned int getDay() const{
        return day;
    }
    unsigned int getMonth() const{
        return month;
    }
    unsigned int getYear() const{
        return year;
    }
};

#endif /* DATE_H */

