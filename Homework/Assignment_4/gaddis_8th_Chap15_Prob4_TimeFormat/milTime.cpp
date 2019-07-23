/* 
 * File:   milTime.cpp
 * Author: Tyler Stevens 
 * Created on July 22, 2019, 11:41 AM
 * Purpose: Convert military time to standard time
 */

#include "milTime.h"

//************************************************************************
//Constructor accept arguments for the hour and seconds, in              *
//military format. The time should then be converted to standard time    *
//and stored in the hours , min , and sec variables of the Time class.   *
//************************************************************************
milTime::milTime(int h,int s){
    
    milHours = h;
    milSeconds = s;
    hour = (milHours / 100);
    min = milHours % 100;
    sec = milSeconds;
    Time(hour,min,sec);


}
//****************************************************************************
//setTime() sets the values for the member functions milHours and milSeconds *
//then determines standard the hour,min and sec in Time class                *
//****************************************************************************
void milTime::setTime(int h, int s)
{
	milHours = h;
	milSeconds = s;
	hour = (milHours / 100);
	min = milHours % 100;
	sec = milSeconds;

}
