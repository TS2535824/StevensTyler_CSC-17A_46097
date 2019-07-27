/* 
 * File:   Prob3Table.h
 * Author: Tyler Stevens
 *
 * Created on July 26, 2019
 */

#ifndef PROB3TABLE_H
#define PROB3TABLE_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

template<class T>
class Prob3Table{
protected:
    int rows; //Number of rows in the table
    int cols; //Number of cols in the table
    T *rowSum; //RowSum array
    T *colSum; //ColSum array
    T *table; //Table array
    T grandTotal; //Grand total
    void calcTable(void); //Calculate all the sums 
public:
    //Constructor
    Prob3Table(char *,int,int);
    
    //Destructor
    ~Prob3Table(){delete [] table;delete [] rowSum;delete [] colSum;};
    
    //Getters
    const T *getTable(void)
        {return table;}
    const T *getRowSum(void)
        {return rowSum;}
    const T *getColSum(void)
        {return colSum;}
    T getGrandTotal(void)
        {return grandTotal;}
};
//**********************************************
//Constructor sets values to member variables  *
//**********************************************
template<typename T>
Prob3Table<T>::Prob3Table(char *DataFile,int row,int col) {
    //validate reading from a file
    ifstream in(DataFile);
    if(in.fail()){
    cout<<"ERROR!"<<DataFile<<endl;
    exit(1);
}
    table=new T[row*col];
    rows=row;
    cols=col;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            in>>table[i*col+j];

    //close file
    in.close();
    
    //Allocate memory
    rowSum=new T[row];
    colSum=new T[col];
    calcTable();
}
//*************************************
//calcTable() determines the sums     *
//*************************************
template<typename T>
void Prob3Table<T>::calcTable(void) {
    
    grandTotal=0;
    for(int row=0;row<rows;row++){
        rowSum[row]=0;
        for(int col=0;col<cols;col++){
            rowSum[row]+=table[row*cols+col];
        }
        grandTotal+=rowSum[row];
    }

    for(int col=0;col<cols;col++){
        colSum[col]=0;
        for(int row=0;row<rows;row++){
            colSum[col]+=table[row* cols + col];
        }
    }

}
//*******************************
//Prob3Table() determines table *
//*******************************
template<class T>
class Prob3TableInherited:public Prob3Table<T>{
protected:
    T *augTable;
public:
    //IN line Constructor
    Prob3TableInherited(char *DataFile,int rows,int cols):Prob3Table<T>(DataFile, rows, cols){

        augTable=new T[(rows+1)*(cols+1)];
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                augTable[i*(cols+1)+j]=Prob3Table<T>::table[i*cols+j];

        //rows and column index
        int r, c;
        c=cols;
        for(r=0;r<rows;r++)
            augTable[r*(cols+1)+c]=Prob3Table<T>::rowSum[r];

        r=rows;
        for(c=0;c<cols;c++)
            augTable[r*(cols+1)+c]=Prob3Table<T>::colSum[c];

        augTable[(rows+1)*(cols+1)-1]=Prob3Table<T>::getGrandTotal();
    }
 //******************************
//Destructor deallocates memory *
//*******************************
~Prob3TableInherited()
    {delete [] augTable;}; 
//Getter
const T *getAugTable(void)
{return augTable;};
};

#endif /* PROB3TABLE_H */

