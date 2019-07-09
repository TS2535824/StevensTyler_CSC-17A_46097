/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 8 2019 11:34 AM
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
    int cost[SIZE];
    int rev[SIZE];
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
    cout<<"Year Released, the Running Time in (minutes),cost,and revenue."<<endl;
    
    //get the amount of movies
    cin>>amount;
   // MovieData movie[amount];
    
    
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
        
        //get cost of filming
        cin>>movie.cost[i];
        
        //get movies revenue
        cin>>movie.rev[i];
        
        //display results
        cout<<endl;
        cout<<"Title:     "<<movie.title[i]<<endl;
        cout<<"Director:  "<<movie.director[i]<<endl;
        cout<<"Year:      "<<movie.year[i]<<endl;
        cout<<"Length:    "<<movie.time[i]<<endl;
        cout<<"Cost:      "<<movie.cost[i]<<endl;
        cout<<"Revenue    "<<movie.rev[i]<<endl;
        
    }
    //Exit stage right or left!
    return 0;
}

