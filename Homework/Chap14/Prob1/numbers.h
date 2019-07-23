/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   numbers.h
 * Author: steve
 *
 * Created on July 21, 2019, 11:28 AM
 */
using namespace std;

#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
#include <cmath>


class numbers {
    private:
        int nums;
    public:
        const static string lessThan20[];
        const static string tens[];
        const static string thousand;
        const static string hundred;
        numbers(int);              //constructor defined in numbers.cpp
        void print();
};

#endif /* NUMBERS_H */

