/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose: Essay Class From Chapter
 */

#ifndef GRDEDACTVTY_H
#define GRDEDACTVTY_H

class GrdedActvty{
protected:
    float grmmr;    //Score For Test
    float spllng;   //Spelling
    float lngth;    //Correct Length
    float cntnt;    //Content
    float ttl;      //Total Score
public:
    GrdedActvty();
    void entrScres();
};

#endif /* GRDEDACTVTY_H */
