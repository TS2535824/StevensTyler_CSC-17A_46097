/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 13 2019
 * Purpose:  Users information
 */

#define ARRAY2D_H

struct DynAry2{
    
    //declare fields
    string name;
    char score;
    int rows;
    int cols;
    int **array;
};
struct Player{
    //nested pointer
    DynAry2 *use;
    
    
};

