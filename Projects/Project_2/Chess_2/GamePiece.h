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

class GamePiece : public StartGame
{
    
private:
    char type;              //type of game piece
    char color;             //color of game piece is either black or white
    char type2;             //used in piece comparison
    char color2;            //used
public:
    //Default constructor defined in GamePiece.cpp
   // GamePiece();
    
    //Constructor defined in GamePiece.cpp
   // GamePiece(int,int,int,int);
      
    //Member functions defined in GamePiece.cpp
    void validateMove(int,int,int,int);
    bool collision(int,int);
    void setTypeColor(int,int,int,int);
    void setTypeColor(int,int);  
    void WhitePawn(int,int,int,int);
    
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
    

    // Definition of static member variable color
   
};
class AbstractClass : public GamePiece{
public:
    //abstract functions pure virtual
    virtual void move(int x, int y,int nx,int ny,char typ1)=0;
};

class WhitePawn:public AbstractClass{
    
public:
    void move(int x, int y,int nx,int ny, char typ1){
         cout<<"inside pawn"<<endl;
    cout<<"Move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    
    //diagonal upper left by one
    if(nx==x-1&&ny==y-1){
        cout<<"diagonal up one to the left"<<endl;
        //check for collision
        if(collision(nx,ny)){
            setTypeColor(nx,ny);
            
        if(typ1==getColor2())
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else
            throw ouchThatHurt();       
        }
        else 
            throw NotaMove();
           
    }
    //diagonal upper right one
    else if(nx==x-1&&ny==y+1){
        cout<<"diagonal up one to the right"<<endl;
        //check for collision
        if(collision(nx,ny)){
            setTypeColor(nx,ny);
            
        if(!getColor()==getColor2())
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else
            throw ouchThatHurt();       
        }else 
            throw NotaMove();
    }
    
    //up by one
    else if(nx==x-1&&ny==y){
        //check for collision 
        cout<<"move one up"<<endl;
        if(!collision(nx,ny))
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else 
            throw ouchThatHurt();
    }
    else{
        throw NotaMove();
    }
    }
};
class BlackPawn:public AbstractClass{
    
public:
    void move(int x, int y,int nx,int ny,char typ1){
         cout<<"inside pawn"<<endl;
    cout<<"Move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    
    //diagonal lower left by one
    if(nx==x+1&&ny==y-1){
        cout<<"diagonal down one to the left"<<endl;
        //check for collision
        if(!collision(nx,ny)){
            setTypeColor(nx,ny);
            
        if(!getColor()==getColor2())
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else
            throw ouchThatHurt();       
        }
        else 
            throw NotaMove();
           
    }
    //diagonal lower right one
    else if(nx==x+1&&ny==y+1){
        cout<<"diagonal down one to the right"<<endl;
        //check for collision
        if(!collision(nx,ny)){
            setTypeColor(nx,ny);
            
        if(!getColor()==getColor2())
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else
            throw ouchThatHurt();       
        }else 
            throw NotaMove();
    }
    
    //down by one
    else if(nx==x+1&&ny==y){
        //check for collision 
        cout<<"move one down"<<endl;
        if(!collision(nx,ny))
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else 
            throw ouchThatHurt();
    }
    else{
        throw NotaMove();
    }
    }
};
class WhiteRook:public AbstractClass{
public:
    void move(int x, int y,int nx,int ny,char typ1){
        
        //Check right
        cout<<"checking right"<<endl;
        //cout<<color<<endl;
        for(int i=1;(y+i)<=8;i++){
            cout<<x<<" and "<<y+i<<endl;
            if(collision(x,y+i)){
                cout<<"Find type and color of piece that would be collided with"<<endl;
                setTypeColor(x,y+i);
               // cout<<color<<" other color "<<color2<<endl;
                if(getColor()!=getColor2()){
                    cout<<"Move pawn to "<<nx<<","<<ny<<endl;
                    i=5;
                }
                else 
                    throw ouchThatHurt();
                  
                
            
            }
                
        }
    }
    
};
class BlackRock:public AbstractClass{
    
};


#endif /* GAMEPIECE_H */

