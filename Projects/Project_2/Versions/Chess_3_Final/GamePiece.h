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

class GamePiece:public StartGame{
protected:
    char type1,
         type2,
         color,
         color2;
public:
    //Default constructor
    GamePiece();
    
    //Constructor
    GamePiece(int x,int y,int nx,int ny);
    
    //Destructor
    virtual ~GamePiece(){
        
    }
    
    //Member function prototypes
    bool collision(int,int);
    void TryMove(int,int,int,int);
    void setItems(int x, int y, int nx, int ny);
    void WhitePawn(int,int,int,int);
    void BlackPawn(int,int,int,int);
    void WhiteRook(int,int,int,int);
    void BlackRook(int,int,int,int);
    void WhiteBiship(int,int,int,int);
    void BlackBiship(int,int,int,int);
    void WhiteKnight(int,int,int,int);
    void BlackKnight(int,int,int,int);
    void WhiteQueen(int,int,int,int);
    void BlackQueen(int,int,int,int);
    void WhiteKing(int,int,int,int);
    void BlackKing(int,int,int,int);
   
   
    
   
    
    //Getters
    char getType1()const{
        return type1;
    }
    
    char getType2()const{
        return type2;
    }
    
    char getColor()const{
        return color;
    }
    char getColor2()const{
        return color2;
    }
    
    //Exceptions
    class NotaPiece{};
    
    class IllegalMove{};
    
    class SelfDestruct{};
            
    
};
////Abstract class
//class interface:GamePiece{
//public:
//    virtual void move()=0;
//};

#endif /* GAMEPIECE_H */

