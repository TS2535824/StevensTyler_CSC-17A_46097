/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 22, 2019, 1:20 PM
 * Purpose determines a students grade on an essay
 */

#include <iostream>
using namespace std;

//User Libraries
#include "Essay.h"
int main() {
    
    //create Essay object
    Essay student1(30,20,20,30);
    Essay student2(10,15,20,25);
    
    //display result
    cout<<"Student1: "<<student1.getLetterGrade()<<endl;
    cout<<"Student2: "<<student2.getLetterGrade()<<endl;


    return 0;
}

