/* 
 * File:   Prob2Sort.h
 * Author: Tyler Stevens
 *
 * Created on July 26, 2019, 10:20 AM
 */

#ifndef PROB2SORT_H
#define PROB2SORT_H
#include <ctime>
using namespace std;

template<class T>
class Prob2Sort
{
private:
    int *index;                              //Index that is utilized in the sort

public:
    Prob2Sort(){index=NULL;};                  //Constructor
    ~Prob2Sort(){delete []index;};             //Destructor
    T *sortArray(const T*,int,bool);           //Sorts a single column array
    T *sortArray(const T*,int,int,int,bool);   //Sorts a 2 dimensional array represented as a 1 dim array
};

template<class T>
T* Prob2Sort<T>::sortArray(const T* array, int size, bool acsen){
  
    return sortArray(array, size, 1, 1, acsen);
}

template<class T>
T* Prob2Sort<T>::sortArray(const T* array, int row, int col, int sort, bool acsen){
    
    if(sort<1||sort>col||row<1||col<1) {
        return NULL;
    }
    
    int fun,        //minimum or maximum
        temp,       //temporary
        i,          //index 1
        j;          //index 2

    //deallocate
    if(index) {
        delete [] index;
    }
    //allocate
    index=new int[row];

    //fill array
    for(i=0;i<row;i++)
        index[i] = i;
    
    for(i=0;i<row;i++){
        
        fun=i;
        for(j=i+1;j<row;j++)
        {
            if(acsen){
                if(array[index[j]*col+sort-1]<array[index[fun]*col+sort-1])
                    fun=j;
            }else{
                if(array[index[j]*col+sort-1]>array[index[fun]*col+sort-1])
                    fun=j;
            }
        }
        temp=index[i];
        index[i]=index[fun];
        index[fun]=temp;
    }

    T* sorted=new T[row*col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sorted[i*col+j]=array[index[i]*col+j];
        }
    }
    return sorted;
}
#endif

