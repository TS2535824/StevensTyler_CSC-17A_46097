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
    static int ObjectCount;
public:
    //Default constructor
    StartGame();
    
    
    //Destructor
   virtual ~StartGame(){
       cout<<"Thank for playing!"<<endl;
    }
    
    //Print board
    void print();
    
    //getters
    char getPlace(int x,int y)const
    {return board[x][y];}
    
    int getObjectCount(){
        return ObjectCount;
    }

};

#endif /* STARTGAME_H */

