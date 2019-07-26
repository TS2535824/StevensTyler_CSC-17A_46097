#include <iostream>
#include <iomanip>
#include "GradedActivity.h"
#include "FinalExam.h"

using namespace std;

int main(){
    
    int questions;//Number of Questions on the exam
    int missed; //NUmer of questions missed by the student
    
    //get the number of questions on the final exam.
    cout<<"How many questions are on the final exam? ";
    cin>>questions;
    
    //get the number of questions the student missed
    cout<<"How many questions did the student miss? "; 
    cin>>missed;
    
    //Defined a FinalExam object and initialize it with the values entered
    FinalExam test(questions,missed);
    
    //Display the test results
    cout<<setprecision(2);
    cout<<"\nEach questions counts"<<test.getPointsEach()<<" points. \n";
    cout<<"The exam score is " <<test.getScore()<<endl;
    cout<<"The exam grade is "<<test.getLetterGrade()<<endl;
    
    
    return 0;
    
}

