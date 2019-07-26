/* 
 * File:   GamePiece.cpp
 * Author: Tyler Stevens
 * Created on July 23, 2019, 3:59 PM
 */
#include "GamePiece.h"
using namespace std;
#include <iomanip>     

//*************************************************
//Default Constructor                             *
//*************************************************
GamePiece::GamePiece(){
       
        cout<<"Lets Play! Enter -1 to exit"<<endl;

}

//*******************************************************************
//Constructor sets values for all member variables and calls        *
//which ever member functions that correponds to the players move   *
//*******************************************************************
void GamePiece::setItems(int x, int y, int nx, int ny){
    
    char i=board[x][y];
    char p=board[nx][ny];
    
     //Determine the old positions type and color
    if(i=='p'){
        type1='p';
        color='w';
    }
    else if(i=='r'){
        type1='r';
        color='w';
    }
    else if(i=='n'){
        type1='n';
        color='w';
    }
    else if(i=='b'){
        type1='b';
        color='w';
    }
    else if(i=='q'){
        type1='q';
        color='w';
    }
    else if (i=='k'){
        type1='k';
        color='w';
    }
    else if(i=='P'){
        type1='P';
        color='B';
    }
    else if(i=='R'){
        type1='R';
        color='B';
    }
    else if(i=='N'){
        type1='N';
        color='B';
    }
    else if(i=='B'){
        type1='B';
        color='B';
    }
    else if(i=='Q'){
        type1='Q';
        color='B';
    }
    else if(i=='K'){
        type1='K';
        color='B';
    }
    
     
     //Determine the new positions type and color
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
    else if(p=='*'){
        type2='*';
        color2='x';
    }
    else if(p=='-'){
        type2='-';
        color2='x';
    }
    else 
        throw NotaPiece();
    
    
    

}

//TryMove() calls correspingind rules for move\
//*********************************************
void GamePiece::TryMove(int x, int y, int nx, int ny){
    
    char i=board[x][y];
    char p=board[nx][ny];

    if(i=='p'){
    
     try{
            WhitePawn(x,y,nx,ny);
            board[nx][ny]=i;
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;
            
        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;
           
        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;
            
        }
    }
    else if(i=='r'){
        try{
             
            WhiteRook(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }

    }
    else if(i=='n'){
        try{
             
            WhiteKnight(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
  
    }
    else if(i=='b'){
         try{
             
            WhiteBiship(x,y,nx,ny);
            board[nx][ny]=i;
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;
            
        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;
           
        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;
            
        }
        
        
    }
    else if(i=='q'){
        try{
             
            WhiteQueen(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
        
    }
    else if (i=='k'){
        try{
             
            WhiteKing(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
        
    }
    else if(i=='P'){
         try{
             
            BlackPawn(x,y,nx,ny);
            board[nx][ny]=i;
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='-';
            else if(x%2==1&&y%2==1)
                board[x][y]='-';
            else
                board[x][y]='*';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
       
        
    }
    else if(i=='R'){
        try{
             
            BlackRook(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
        
    }
    else if(i=='N'){
        try{
             
            BlackKnight(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
    }
    else if(i=='B'){
        try{
             
            BlackBiship(x,y,nx,ny);
            board[nx][ny]=i;
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;
            
        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;
           
        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;
            
        }
        
        
    }
    else if(i=='Q'){
        try{
             
            BlackQueen(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
        
    }
    else if(i=='K'){
        try{
             
            BlackKing(x,y,nx,ny);
      
            //check for even and even
            if(x%2==0&&y%2==0)
                board[x][y]='*';
            else if(x%2==1&&y%2==1)
                board[x][y]='*';
            else
                board[x][y]='-';
        }
        catch(GamePiece::NotaPiece()){
            cout<<"The spot you picked is not a chess piece"<<endl;

        }
        catch(GamePiece::IllegalMove){
            cout<<"Move not permitted"<<endl;

        }
        catch(GamePiece::SelfDestruct){
            cout<<"Move would result in self collision"<<endl;

        }
        
        
    }
    
}


//******************************************************************
//collision() determines if there is a chess piece in desired spot *
//******************************************************************
bool GamePiece::collision(int x, int y){
    
    char p=board[x][y];
    
    
    //if spot does not equal an asterisk or a dash return 
    //true meaning there is a collision
    if(p=='*'||p=='-'){
        cout<<"no collision "<<endl;
        return false;
    }
    else{
        cout<<"collision"<<endl;
        return true;
    }
}
//***************************************************************
//WhitePawn() uses the rules for the white pawn piece in        *
//determining if player move is valid                           *
//***************************************************************
void GamePiece::WhitePawn(int x, int y, int nx, int ny){
    
    cout<<"white pawn"<<endl;
    
    cout<<"Trying to Move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    
    //diagonal upper left by one
    if(nx==x-1&&ny==y-1){
        cout<<"diagonal up one to the left"<<endl;
        //check for collision
        if(collision(nx,ny)){  
            
            //check if they are the same color
            if(getColor()!=getColor2())
                cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            else
                throw SelfDestruct();       
        }else
            throw IllegalMove();    
    }
    //diagonal upper right one
    else if(nx==x-1&&ny==y+1){
        cout<<"diagonal up one to the right"<<endl;
        cout<<getColor()<<" other "<<getColor2()<<endl;
        //check for collision
        if(collision(nx,ny)){
            
            //check if they are the same color
            if(getColor()!=getColor2())
                cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            else
                throw SelfDestruct();       
        }else
            throw IllegalMove();
    }
    
    //up by one
    else if(nx==x-1&&ny==y){
        //check for collision 
        cout<<"move one up"<<endl;
        if(!collision(nx,ny))
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else 
            throw SelfDestruct();
    } else 
        throw IllegalMove();
}
//***************************************************************
//Black() uses the rules for the Black pawn piece in        *
//determining if player move is valid                           *
//***************************************************************
void GamePiece::BlackPawn(int x, int y, int nx, int ny){
    
    cout<<"Black pawn"<<endl;
    
    cout<<"Trying to Move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    
    //diagonal lower left by one
    if(nx==x+1&&ny==y-1){
        cout<<"diagonal down one to the left"<<endl;
        //check for collision
        if(collision(nx,ny)){  
            
            //check if they are the same color
            if(getColor()!=getColor2())
                cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            else
                throw SelfDestruct();       
        }else
            throw IllegalMove();    
    }
    //diagonal lower right one
    else if(nx==x+1&&ny==y+1){
        cout<<"diagonal down one to the right"<<endl;
        cout<<getColor()<<" other "<<getColor2()<<endl;
        //check for collision
        if(collision(nx,ny)){
            
            //check if they are the same color
            if(getColor()!=getColor2())
                cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            else
                throw SelfDestruct();       
        }else
            throw IllegalMove();
    }
    
    //down by one
    else if(nx==x+1&&ny==y){
        //check for collision 
        if(!collision(nx,ny))
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
        else 
            throw SelfDestruct();
    } else 
        throw IllegalMove();
}
//***************************************************************
//WhiteRook() uses the rules for the WHite Rook piece in        *
//determining if player move is valid                           *
//***************************************************************
void GamePiece::WhiteRook(int x, int y, int nx, int ny){
    
    cout<<"White rook"<<endl;
     //Check right
        if(x==nx&&ny>y){
            cout<<"checking right"<<endl;
            for(int i=1;(y+i)<7;i++){
                cout<<x<<" and "<<y+i<<endl;
                if(collision(x,y+i)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x,y+i);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x<<","<<y+i<<endl;
                        ny=y+i;
                        board[x][y+i]=board[x][y];
                        i=8;
                    }
                    else 
                        throw SelfDestruct();
                }       
        }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
    
        //check left
        if(x==nx&&ny<y){
            cout<<"checking left"<<endl;
            for(int i=1;(y-i)>0;i++){
                cout<<x<<" and "<<y-i<<endl;
                if(collision(x,y-i)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x,y-i);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x<<","<<y-i<<endl;
                        ny=y-i;
                        board[x][y-i]=board[x][y];
                        i=-1;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
   
    //check up
        if(y==ny&&nx<x){
            cout<<"checking up"<<endl;
            for(int i=1;(x-i)>0;i++){
                cout<<x-i<<" and "<<y<<endl;
                if(collision(x-i,y)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x-i,y);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x-i<<","<<y<<endl;
                        nx=x-i;
                        board[x-i][y]=board[x][y];
                        i=8;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
     //check down
        if(y==ny&&nx>x){
            cout<<"checking down"<<endl;
            for(int i=1;(x+i)<nx;i++){
                cout<<x+i<<" and "<<y<<endl;
                if(collision(x+i,y)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x+i,y);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x+i<<","<<y<<endl;
                        nx=x+i;
                        board[x+i][y]=board[x][y];
                        i=-1;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
    }
//***************************************************************
//BlackRook() uses the rules for the Black Rook piece in        *
//determining if player move is valid                           *
//***************************************************************
void GamePiece::BlackRook(int x, int y, int nx, int ny){
    
    cout<<"Black rook"<<endl;
     //Check right
        if(x==nx&&ny>y){
            cout<<"checking right"<<endl;
            for(int i=1;(y+i)<7;i++){
                cout<<x<<" and "<<y+i<<endl;
                if(collision(x,y+i)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x,y+i);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x<<","<<y+i<<endl;
                        ny=y+i;
                        board[x][y+i]=board[x][y];
                        i=8;
                    }
                    else 
                        throw SelfDestruct();
                }       
        }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
    
        //check left
        if(x==nx&&ny<y){
            cout<<"checking left"<<endl;
            for(int i=1;(y-i)>0;i++){
                cout<<x<<" and "<<y-i<<endl;
                if(collision(x,y-i)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x,y-i);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x<<","<<y-i<<endl;
                        ny=y-i;
                        board[x][y-i]=board[x][y];
                        i=-1;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
   
    //check up
        if(y==ny&&nx<x){
            cout<<"checking up"<<endl;
            for(int i=1;(x-i)>0;i++){
                cout<<x-i<<" and "<<y<<endl;
                if(collision(x-i,y)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x-i,y);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x-i<<","<<y<<endl;
                        nx=x-i;
                        board[x-i][y]=board[x][y];
                        i=8;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
     //check down
        if(y==ny&&nx>x){
            cout<<"checking down"<<endl;
            for(int i=1;(x+i)<nx;i++){
                cout<<x+i<<" and "<<y<<endl;
                if(collision(x+i,y)){
                    cout<<"Find type and color of piece that would be collided with"<<endl;
                    setItems(x,y,x+i,y);


                    if(getColor()!=getColor2()){
                        cout<<"Move pawn to "<<x+i<<","<<y<<endl;
                        nx=x+i;
                        board[x+i][y]=board[x][y];
                        i=-1;
                    }
                    else 
                        throw SelfDestruct();
                }       
            }
            cout<<"Move pawn to "<<nx<<","<<ny<<endl;
            setItems(x,y,nx,ny);
            board[nx][ny]=board[x][y];
        }
    }
//**********************************************************
//WhiteQueen() determines how to move the white queen piece*
//**********************************************************
void GamePiece::WhiteQueen(int x, int y, int nx, int ny){
    
    if(collision(nx,ny)){
        if(getColor()!=getColor2()){
            board[nx][ny]=board[x][y];
        }
        else
            throw SelfDestruct();
    }
    else
        board[nx][ny]=board[x][y];

}
//*************************************************************
//BlackQueen() determines how to move the Black queen piece   *
//*************************************************************
void GamePiece::BlackQueen(int x, int y, int nx, int ny){
    
    if(collision(nx,ny)){
        if(getColor()!=getColor2()){
            board[nx][ny]=board[x][y];
        }
        else
            throw SelfDestruct();
    }
    else
        board[nx][ny]=board[x][y];

}
//********************************************************
//WhiteKing() determines how to move the white king piece*
//********************************************************
void GamePiece::WhiteKing(int x, int y, int nx, int ny){
    //Check for collision
    cout<<"Trying to move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    if(collision(nx,ny)){
        if(getColor()!=getColor()){
            board[nx][ny]=board[x][y];
        }
        else 
            throw SelfDestruct();
    }
    if(abs(x-nx)==1||abs(x-nx)==0){
        cout<<"x passed"<<endl;
        if(abs(y-ny)==1||abs(y-ny)==0){
            cout<<"setting"<<endl;
            board[nx][ny]=board[x][y];
        }
        else
            throw IllegalMove();
    } else
        throw IllegalMove();     
}
//*************************************************************
//BlackKing() determines how to move the Black King piece     *
//*************************************************************
void GamePiece::BlackKing(int x, int y, int nx, int ny){
  //Check for collision
    cout<<"Trying to move "<<x<<","<<y<<" to "<<nx<<","<<ny<<endl;
    if(collision(nx,ny)){
        if(getColor()!=getColor()){
            board[nx][ny]=board[x][y];
        }
        else 
            throw SelfDestruct();
    }
    if(abs(x-nx)==1||abs(x-nx)==0){
        cout<<"x passed"<<endl;
        if(abs(y-ny)==1||abs(y-ny)==0){
            cout<<"setting"<<endl;
            board[nx][ny]=board[x][y];
        }
        else
            throw IllegalMove();
    } else
        throw IllegalMove();
}
//*************************************************************
//WhiteBiship() determines how to move the White Biship piece *
//*************************************************************
void GamePiece::WhiteBiship(int x, int y, int nx, int ny){

	bool invalid = false;
	if (abs(x - nx) == abs(y - ny)){
            
            int xIncrement = (nx - x) / (abs(x - nx));
            int yIncrement = (ny - y) / (abs(y - ny));

            for (int i = 1; i < abs(x - nx); i++){

                if(collision(nx,ny))
                    if(getColor()!=getColor())
                          board[nx][ny]=board[x][y];
                else
                    throw SelfDestruct();

            }
	}
	else
            throw IllegalMove();

}
//*************************************************************
//BlackBiship() determines how to move the Black Biship piece *
//*************************************************************
void GamePiece::BlackBiship(int x, int y, int nx, int ny){

	bool invalid = false;
	if (abs(x - nx) == abs(y - ny)){
            
            int xIncrement = (nx - x) / (abs(x - nx));
            int yIncrement = (ny - y) / (abs(y - ny));

            for (int i = 1; i < abs(x - nx); i++){

                if(collision(nx,ny))
                    if(getColor()!=getColor())
                          board[nx][ny]=board[x][y];
                else
                    throw SelfDestruct();

            }
	}
	else
            throw IllegalMove();

}
//*************************************************************
//BlackKnight() determines how to move the Black Knight piece *
//*************************************************************
void GamePiece::BlackKnight(int x, int y, int nx, int ny){

	if ((abs(x - nx) == 2 && abs(y - ny) == 1) || (abs(x - nx) == 1 && abs(y - ny) == 2))
	{
		if(collision(nx,ny)){
                    if(getColor()!=getColor())
                          board[nx][ny]=board[x][y];
              }
              
	}
	else
          throw IllegalMove();
}
//*************************************************************
//WhiteKnight() determines how to move the White Knight piece *
//*************************************************************
void GamePiece::WhiteKnight(int x, int y, int nx, int ny){

	if ((abs(x - nx) == 2 && abs(y - ny) == 1) || (abs(x - nx) == 1 && abs(y - ny) == 2))
	{
		if(collision(nx,ny)){
                    if(getColor()!=getColor())
                          board[nx][ny]=board[x][y];
              }
              
	}
	else
          throw IllegalMove();
}




