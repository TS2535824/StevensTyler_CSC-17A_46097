/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tree.h
 * Author: steve
 *
 * Created on July 25, 2019, 11:53 AM
 */
#include <iostream>
using namespace std;

class abstract{
public:
    virtual void type()=0;
};

//tree
class Tree
{
private:
    static int objectCount; // Static member variable.
public: 
    //Default constructor
    Tree(){ 
        objectCount++; 
    }
    //destructor
    virtual ~Tree(){
        
    }
    
    ////friend member function
    friend void TreeHugger(Tree &obj);

// getter function for objectCount
int getObjectCount() const
{ return objectCount; }
};

// Definition of the static member variable, written
// outside the class.
int Tree::objectCount = 0;

//friend class
void TreeHugger(Tree &obj){
   cout<<obj.objectCount<<endl;
}

class pawn:public abstract,Tree{
public:
    void type(){
        cout<<"----------------------------Pawn----------------------------------------"<<endl;
        cout<<"a pawn is able to move two spaces forward the first(but not in this chess game)\n"
                "and one same forward after the first turn.\n"
                " it can capture the other color pice if they are one piece diagonally away"
                "a pawn can be promoted when it reach the other side of the board "<<endl;
    }
};
class rook:public abstract,Tree{
public:
    void type(){
        cout<<"\n\n\n----------------------------Rook----------------------------------------"<<endl;
        cout<<"The rook can move forwards, backwards, left, and right as many spaces as they want \n"
              "as long as there is not the same color piece in the way"<<endl;
    }
};
class knight:public abstract,Tree{
public:
    void type(){
        cout<<"\n\n\n----------------------------Knight--------------------------------------"<<endl;
        cout<<"These chess pieces have the unique trait of being able to 'leap' over other chess pieces. \n";
        cout<<"They move in an L shape . If they land on an opposing chess piece, it is captured."<<endl;
    }
};
class bishop:public abstract,Tree{
public:
    void type(){
        cout<<"\n\n\n----------------------------Bishop--------------------------------------"<<endl;
        cout<<"The bishop moves any number of spaces on the diagonals as \n"
              "long as they are not obstructed by another chess piece"<<endl;
    }
};
class queen:public abstract,Tree{
public:
    void type(){
        cout<<"\n\n\n----------------------------Queen----------------------------------------"<<endl;
        cout<<"The Queen is often considered the most powerful chess "
                "piece on the chessboard.\nShe can move in any direction any number of spaces!"<<endl;
    }
};
class king:public abstract,Tree{
public:
    void type(){
        cout<<"\n\n\n----------------------------King----------------------------------------"<<endl;
        cout<<"The King is the most important chess piece on the chessboard.\n"
              "If he is checkmated the game is over!"<<endl;
         cout<<"The King can move one space in any direction.\n"
               "He can never move in to check(where he is threatened by "
               "another piece).\n This means the king can never be in the space "
               "adjacent to the opposing King."<<endl;
    }  
};
