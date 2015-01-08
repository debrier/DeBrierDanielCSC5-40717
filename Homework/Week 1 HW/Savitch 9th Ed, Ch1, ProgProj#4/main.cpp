/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: Calculate freefall
 * Created on January 8, 2015, 10:55 AM
 */

#include <iostream>

using namespace std;

//user libraries

//global constants
const short GRAVITY=32;

//function prototypes

//execution begins here


int main(int argc, char** argv) {
    //Declare variables
    short time;
    short distance;
    
    //Prompt user for input
    cout<<"This program is designed to show how far an object would"<<endl;
    cout<<"drop in freefall, relative to a particular length of time."<<endl;
    
    //Request user input for time
    cout<<"Please input a time"<<endl;
    cin>>time; 
    
    //Begin calculating the freefall distance
    distance=(GRAVITY*(time*time))/2;
    
    //Display output
    
    cout<<"The object would fall "<<distance<<" feet in freefall."<<endl;

    return 0;
}

