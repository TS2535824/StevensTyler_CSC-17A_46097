/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StartGame.cpp
 * Author: Tyler Stevens
 * Created on July 23, 2019, 7:18 AM
 * Purpose: Start a game of Chess
 */

#include "StartGame.h"
#include <iostream>
#include <fstream>
using namespace std;


//Default constructor sets values to member functions row and col.
//Tests for exceptions in creating a Dynamically allocated array. Fills
//array from file Calls print function.

StartGame::StartGame(){
    //cout<<"Start game"<<endl;
    //size of rows and columns
    row=8;
    col=8;

    //dynamically allocate array
    board=new char*[row];
 
    for(int i=0;i<row;i++)
        board[i]=new char[col];
     
    dataFile.open("newBoard.txt");
    
    for(int x=0;x<col;x++)
        for(int y=0;y<row;y++)
            dataFile>>board[x][y];
    
   // print();

    dataFile.close();
            
}

//prints board
void StartGame::print(){
    
     cout<<"  0 1 2 3 4 5 6 7";
    for(int x=0;x<col;x++){
        cout<<endl;
        for(int y=0;y<row;y++){
            if(y==0)
                cout<<x<<" ";
           cout<< board[x][y]<<" ";
        }
    }cout<<"\n  A B C D E F G H"<<endl;
    
}



