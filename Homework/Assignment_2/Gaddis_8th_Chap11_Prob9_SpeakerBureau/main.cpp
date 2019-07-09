/* 
 * File:   main.cpp
 * Author: Tyler Stevens
 * Created on July 7 2019 5:36 PM
 * Purpose:  To be able to edit the bureaus speakers
 *           name,phone,topic, and fee
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //strings
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int SIZE=10;

//structures
struct speakers{
    
    string name[SIZE];
    int tele[SIZE];
    string topic[SIZE];
    int fee[SIZE];
};

//Function Prototypes
void fillObject(speakers&);
void display(speakers);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //initialize termination flag
    bool flag=true;
    int choice;
    int index;
    speakers change;
    
    //fill object with information
    fillObject(change);
    
    //display array contents
    display(change);
    
    
    while(flag){
        
        
        cout<<"Change?"<<endl;
        cout<<"Name: 1\nTelephone: 2\nTopic: 3\nFee: 4\nAnything to quit: "<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:
                cout<<"Enter index position: ";
                cin>>index;
                cout<<"Enter name: ";
                cin.ignore();
                getline(cin,change.name[index]);
                break;
            case 2:
                cout<<"Enter index position: ";
                cin>>index;
                cout<<"Enter Telephone number: ";
                cin>>change.tele[index];
                break;
            case 3:
                cout<<"Enter index position: ";
                cin>>index;
                cout<<"Enter topic: ";
                cin.ignore();
                getline(cin,change.topic[index]);
                break;
            case 4:
                cout<<"Enter index position: ";
                cin>>index;
                cout<<"Enter fee: ";
                cin>>change.fee[index];
                break;
            default:
                flag=false;    
                
        }
    }
    
    //display array contents
    display(change);

    //Exit stage right or left!
    return 0;
}
//*******************************************************************
//Definition of display. This function display contents of an array *
//of 10 elements.                                                   *
//*******************************************************************
void display(speakers change){
    
    
    cout<<"------Names-------\n";
    for(int i=0;i<SIZE;i++){
        
        cout<<change.name[i]<<endl;  
    }
    cout<<"------Telephone numbers------\n";
    for(int i=0;i<SIZE;i++){
        
        cout<<change.tele[i]<<endl;  
    }
    cout<<"-------Topic-------\n";
    for(int i=0;i<SIZE;i++){
        
        cout<<change.topic[i]<<endl;  
    }
    cout<<"------Fees-----\n";
    for(int i=0;i<SIZE;i++){
        
        cout<<change.fee[i]<<endl;  
    }
}
//******************************************************************************
//Definition of function fillObject. This function display contents of a  array*
//of ten structures.                                                           *
//******************************************************************************
void fillObject(speakers &change){
    
    for(int i=0;i<SIZE;i++){
        
        change.name[i]="nothing";
        change.tele[i]=0;
        change.topic[i]="nothing";
        change.fee[i]=0;
    }
    
}
