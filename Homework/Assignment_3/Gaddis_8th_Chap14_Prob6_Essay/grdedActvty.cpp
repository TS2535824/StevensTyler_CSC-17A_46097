/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose: Essay Class From Chapter
 */


#include <iostream>
#include "grdedActvty.h"
using namespace std;

GrdedActvty::GrdedActvty(){
    grmmr=0.0f;
    spllng=0.0f;
    lngth=0.0f;
    cntnt=0.0f;
    ttl=0.0f;
}

void GrdedActvty::entrScres(){
    do{
    cout<<"Enter Score For Grammar: ";
    cin>>grmmr;
        if(grmmr<0||grmmr>30){
            cout<<"Grammar Score Must be in between 0 and 30."<<endl;
        }
    }while(grmmr<0||grmmr>30);
    
    do{
    cout<<"Enter Score For Spelling: ";
    cin>>spllng;
    if(spllng<0||spllng>20){
            cout<<"Spelling Score Must be in between 0 and 30."<<endl;
        }
    }while(spllng<0||spllng>20);
    
    do{
    cout<<"Enter Score For Correct Length: ";
    cin>>lngth;
    if(lngth<0||lngth>20){
            cout<<"Correct Length Score Must be in between 0 and 30."<<endl;
        }
    }while(lngth<0||lngth>20);
    
    do{
    cout<<"Enter Score For Content: ";
    cin>>cntnt;
    if(cntnt<0||cntnt>30){
            cout<<"Content Score Must be in between 0 and 30."<<endl;
        }
    }while(cntnt<0||cntnt>30);
    
    ttl=grmmr+spllng+lngth+cntnt;
    
    cout<<endl<<"Total Score is "<<ttl<<" Out of 100 Points."<<endl;
    cout<<"Percentage is "<<ttl<<"%"<<endl;
    if(ttl>=0&&ttl<=65){
            cout<<"You got a F on your Essay"<<endl;
    }
    else if(ttl>=66&&ttl<=69){
            cout<<"You got a D on your Essay"<<endl;
    }
    else if(ttl>=70&&ttl<=79){
            cout<<"You got a C on your Essay"<<endl;
    }
    else if(ttl>=80&&ttl<=89){
            cout<<"You got a B on your Essay"<<endl;
    }
    else if(ttl>=90&&ttl<=100){
            cout<<"You got an A on your Essay"<<endl;
    }
}