/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GradedActivity.cpp
 * Author: steve
 * 
 * Created on July 21, 2019, 4:06 PM
 */

#include "GradedActivity.h"

//***********************************************
//Member function GradedActivity::getLetterGrade*
//***********************************************

char GradedActivity::getLetterGrade()const
{
    char letterGrade;   //to hold the letter grade
    
    if(score>89)
        letterGrade='A';
    else if(score>79)
        letterGrade='B';
    else if(score>69)
        letterGrade='C';
    else if(score>59)
        letterGrade='D';
    else
        letterGrade='F';
    
    return letterGrade;
}

