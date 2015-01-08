/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: To show how much $ the East Coast division of a company brought in
 * Created on January 8, 2015, 11:45 AM
 */

#include <iostream>

using namespace std;

//user libraries

//global constants


//function prototypes

//execution begins here

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables
    int Totalsales=4600000;//The total sales of the company
    float ECshare = 0.62; //The total share (%-wise) of 4.6 mil the EC division brought in
    int ECtotal;
    //Describe program to userint 
    cout<<"This program will tell you how much money the East Coast branch"<<endl;
    cout<<"of a company x brought in this year."<<endl;
    
    //Calculate branches amount made
    ECtotal=Totalsales*ECshare;
    
    //Output result to user
    cout<<"The amount that the East Coast branch made this year was"<<ECtotal<<"dollars"<<endl; 
    
    //exit stage right
    return 0;
}

