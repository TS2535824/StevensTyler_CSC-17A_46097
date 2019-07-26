#include "FinalExam.h"


//******************************************************************************
//set function
//The parameters are the number of questions and the number of questions missed
//******************************************************************************

void FinalExam::set(int questions, int missed){
    double numericScore;        //TO HOLD THENUMERIC SCORE
    
    //Set the number of questions and the number missed
    numQuestions=questions;
    numMissed=missed;
    
    //Calculate the numeric score for this exam
    numericScore=100.0-(missed*pointsEach);
    
    //Call the inherited setScore function to set the numeric Score.
    setScore(numericScore);
}