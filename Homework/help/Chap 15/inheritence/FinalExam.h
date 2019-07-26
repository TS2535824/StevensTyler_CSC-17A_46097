#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivity.h"

class FinalExam:public GradedActivity{
private:
    int numQuestions;        //Number of questions
    double pointsEach;      //Points in each
    int numMissed;          //Number of questions
    
public:
    //default constructor
    FinalExam(){
        numQuestions=0;
        pointsEach=0;
        numMissed=0;
    }
    //constructor
    FinalExam(int questions, int missed)
        {set(questions, missed);}
    
    //setter function
    void set(int,int);      //defined in finalexam.cpp
    
    //getter
    double getNumQuestions()const
        {return numQuestions;}
    
    double getPointsEach()const
        {return pointsEach;}
    
    int getNUmMissed()const
        {return numMissed;}
};

#endif /* FINALEXAM_H */

