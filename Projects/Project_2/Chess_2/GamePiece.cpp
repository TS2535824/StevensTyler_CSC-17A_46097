/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GamePiece.cpp
 * Author: Tyler Stevens
 * Created on July 23, 2019, 3:59 PM
 */
#include "GamePiece.h"
using namespace std;
#include <iomanip>     


//******************************************************************
//validateMove determines whether move can take place by excepting *
//where the user wants to go and which piece to move               *
//******************************************************************
void GamePiece::validateMove(int x, int y, int nx, int ny){
    
    cout<<"Validating move"<<endl;
   
    
    try{
        setTypeColor(x,y,nx,ny);
        board[nx][ny]=getType();
        cout<<"get type "<<getType()<<endl;
        ///update board
        //check for even and even
        if(x%2==0&&y%2==0)
            board[x][y]='*';
        else if(x%2==1&&y%2==1)
            board[x][y]='*';
        else
            board[x][y]='-';
    }
    catch(GamePiece::NotaPiece){
        cout<<"Invalid game piece"<<endl;
    }
    catch(GamePiece::NotaMove){
        cout<<"invalid move"<<endl;
    }
    catch(GamePiece::ouchThatHurt){
        cout<<"Would collide with opponent"<<endl;
    }
    
}
//*****************************************************************************
//setTypeColor determines which value inside member function variable board   *
//is trying to be moved. if it cannot found an exception is thrown            *
//used for comparing types                                                    *
//*****************************************************************************
void GamePiece::setTypeColor(int x,int y){
    char p=board[x][y];
    
    cout<<"setting type for piece "<<p<<endl;
    
    //determine player ones game pieces type and color
    if(p=='p'){
        type2='p';
        color2='w';
    }
    else if(p=='r'){
        type2='r';
        color2='w';
    }
    else if(p=='n'){
        type2='n';
        color2='w';
    }
    else if(p=='b'){
        type2='b';
        color2='w';
    }
    else if(p=='q'){
        type2='q';
        color2='w';
    }
    else if (p=='k'){
        type2='k';
        color2='w';
    }
   
    //determine player ones game pieces type and color
    else if(p=='P'){
        type2='P';
        color2='B';
    }
    else if(p=='R'){
        type2='R';
        color2='B';
    }
    else if(p=='N'){
        type2='N';
        color2='B';
    }
    else if(p=='B'){
        type2='B';
        color2='B';
    }
    else if(p=='Q'){
        type2='Q';
        color2='B';
    }
    else if(p=='K'){
        type2='K';
        color2='B';
    }
    else 
        throw NotaPiece();
    
}
//*****************************************************************************
//setTypeColor determines which value inside member function variable board   *
//is trying to be moved. if it cannot found an exception is thrown            *
//*****************************************************************************
void GamePiece::setTypeColor(int x,int y,int nx,int ny){
    
    char p=board[x][y];
    type='z';
    color='z';
    cout<<color<<endl;
    cout<<"setting type for piece "<<p<<endl;
    
    //determine player ones game pieces type and color
    if(p=='p'){
        type='p';
        color='w';
        
        WhitePawn p;
        AbstractClass *abby=&p;
        char typ1=type;
        abby->move(x,y,nx,ny,typ1);
    }
    else if(p=='r'){
        
        WhiteRook p;
        AbstractClass *abby=&p;
        type='r';
        color='w';
        char typ1=type;
        abby->move(x,y,nx,ny,typ1);
    }
    else if(p=='n'){
        type='n';
        color='w';
    }
    else if(p=='b'){
        type='b';
        color='w';
    }
    else if(p=='q'){
        type='q';
        color='w';
    }
    else if (p=='k'){
        type='k';
        color='w';
    }
   
    //determine player ones game pieces type and color
    else if(p=='P'){
        type='P';
        color='B';
        char typ1=type;
        BlackPawn p;
        AbstractClass *abby=&p;
        abby->move(x,y,nx,ny,typ1);
    }
    else if(p=='R'){
        type='R';
        color='B';
    }
    else if(p=='N'){
        type='N';
        color='B';
    }
    else if(p=='B'){
        type='B';
        color='B';
    }
    else if(p=='Q'){
        type='Q';
        color='B';
    }
    else if(p=='K'){
        type='K';
        color='B';
    }
    else 
        throw NotaPiece();
}

//******************************************************************
//collision() determines if there is a chess piece in desired spot *
//******************************************************************
bool GamePiece::collision(int x, int y){
    
    char p=board[x][y];
    
    
    //if spot does not equal an asterisk or a dash return 
    //true meaning there is a collision
    if(p=='*'||p=='-'){
        cout<<"no collision "<<p<<endl;
        return false;
    }
    else{
        cout<<"collision"<<endl;
        return true;
    }
}
    