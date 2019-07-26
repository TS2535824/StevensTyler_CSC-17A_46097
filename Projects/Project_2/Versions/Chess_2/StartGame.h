#ifndef STARTGAME_H
#define STARTGAME_H
#include <iostream>
#include <fstream>          //file manipulation
#include <iomanip>          //formating
#include <cstring>

using namespace std;

class StartGame {
    
protected:
    char **board;        //point to allocated array
    int row;             //rows for chess board
    int col;             //columns for chess board
    int p1Score;        //player ones score
    int p2Score;        //player twos score
    ifstream dataFile;  //file object for inputs data from file in to array used for create board
    
public:
    //Default constructor
    StartGame();
    
    
    //Destroy
    //~StartGame();
    
    //Print board
    void print();
    
    //getters
    char getPlace(int x,int y)
    {return board[x][y];}

};

#endif /* STARTGAME_H */

