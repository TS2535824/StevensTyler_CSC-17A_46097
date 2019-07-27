/* 
 * File:   Prob1Random.cpp
 * Author: Tyler Stevens
 * 
 * Created on July 26, 2019, 9:16 AM
 */

#include "Prob1Random.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//**************************************************************************
//Constructor Prob1Random() sets values for set and nset
//**************************************************************************
Prob1Random::Prob1Random(const char n, const char*rndseq){
    //The number of variables in the sequence
    nset=n;
    
     //dynamically allocate array
    set=new char[n];
    
    freq=new int[n];
    
    //copy array
    for(int i=0;i<n;i++){
        set[i]=rndseq[i];
        freq[i]=0;
    }
    
    numRand = 0;
    srand(time(NULL));
   
  
}
//********************************
//Destructor ~Prob1Random(void) 
//********************************
Prob1Random::~Prob1Random(void){
    delete []set;
    delete []freq;
}

//*********************************************************
//randFromSet(void) returns a random number from the set  *
//*********************************************************
char Prob1Random::randFromSet(){
    
    char index=rand()%nset;
    
    freq[index]++;
    numRand++;
      
    return  set[index];
}


