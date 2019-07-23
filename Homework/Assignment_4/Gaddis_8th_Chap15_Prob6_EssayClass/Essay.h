/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essay.h
 * Author: steve
 *
 * Created on July 22, 2019, 2:19 PM
 */

#ifndef ESSAY_H
#define ESSAY_H
#include "GradedActivity.h"

class Essay : public GradedActivity{
private:
    int grammer;
    int spelling;
    int length;
    int content;
public:
    //Constructor
    Essay(int g,int s ,int l,int c){
        grammer=g;
        spelling=s;
        length=l;
        content=c;
        score=g+s+l+c;
    }

};

#endif /* ESSAY_H */

