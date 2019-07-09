/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 6 2019 11:51 AM
 * Purpose:  a program that uses a structure named MovieData to 
 *           store information about a movie:
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<string>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int SIZE=100;//set array with large enough size for titles and director names

//structures
struct MovieData{
    string title[SIZE], director[SIZE];
    int year[SIZE];
    int time[SIZE];
};

//Function Prototypes

//Execution Begins Here!
int main() {
    
    //declare variables
    int amount;
    MovieData movie;
    
    //display directions
    cout<<"This program reviews structures"<<endl;
    cout<<"Input how many movies, the Title of the Movie, Director, ";
    cout<<"Year Released, and the Running Time in (minutes)."<<endl;
    
    //get the amount of movies
    cin>>amount;    
    
    //fill structure
    for(int i=0;i<amount;i++){
        
        //get title
        cin.ignore();
        getline(cin,movie.title[i]);
        
        //get directors name
        getline(cin,movie.director[i]);
        
        //get year
        cin>>movie.year[i];
        
        //get running time n minutes
        cin>>movie.time[i];
        
        //display results
        cout<<endl;
        cout<<"Title:     "<<movie.title[i]<<endl;
        cout<<"Director:  "<<movie.director[i]<<endl;
        cout<<"Year:      "<<movie.year[i]<<endl;
        cout<<"Length:    "<<movie.time[i]<<endl;
        
    }
    //Exit stage right or left!
    return 0;
}