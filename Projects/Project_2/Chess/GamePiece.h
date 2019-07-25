/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GamePiece.h
 * Author: steve
 *
 * Created on July 23, 2019, 3:59 PM
 */

#ifndef GAMEPIECE_H
#define GAMEPIECE_H
#include "StartGame.h"

class GamePiece : public StartGame {
    
private:
        char type;
        char color;
        char type2;
        char color2;
public:
    //default constructor
    
    
    void validateMove(int,int,int,int);
    void setTypeColor(int,int,int,int);
    void setTypeColor(int,int);
    void WhitePawn(int,int,int,int);
    void BlackPawn(int,int,int,int);
    bool collision(int,int);
    
    
    //Exceptions
    class NotaPiece
        {};
    class ouchThatHurt
        {};
    class NotaMove
        {};
        
    //getters
    char getType()
    {return type;}
    
    char getColor()
    {return color;}
    
    char getType2()
    {return type2;}
    
    char getColor2()
    {return color2;}
    

};

#endif /* GAMEPIECE_H */

