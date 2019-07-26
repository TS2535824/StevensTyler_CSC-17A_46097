/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GradedActivity.h
 * Author: steve
 *
 * Created on July 21, 2019, 4:06 PM
 */

#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

//graded activity class declaration

class GradedActivity {
    
private:
    double score;       //holds numeric score
public:
    
    //default constructor
    GradedActivity()
        {score=0.0;}
    
    //Constructor
    GradedActivity(double s)
        {score=s;}
    
    //setter function...in line
    void setScore(double s)
        {score=s;}
    
    //getter function... in line
    double getScore()const
        {return score;}
    
    char getLetterGrade() const;        //defined in GradedActivity.cpp
            

};

#endif /* GRADEDACTIVITY_H */

