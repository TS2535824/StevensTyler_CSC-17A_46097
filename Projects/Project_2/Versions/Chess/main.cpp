/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 19, 2019, 3:29 PM
 * Purpose: Create a Chess game
 */

#include <iostream>

using namespace std;

//user Libraries
#include "GamePiece.h"


int main() {
    //declare variables
    bool cont=true;
    int px=1,py=2;            //index for piece position
    int mx=2,my=2;            //index for piece to move to
    
    GamePiece play;
    play.validateMove(6,1,5,0);
    play.print();
    
    play.validateMove(1,0,2,0);
    play.print();
    
    
    
    return 0;
}

