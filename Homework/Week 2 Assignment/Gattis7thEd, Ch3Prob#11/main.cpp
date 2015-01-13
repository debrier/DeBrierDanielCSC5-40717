/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: bitcoin conversion
 * Created on January 13, 2015, 10:16 AM
 */

//system libraries
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

    //Declare variables and initialize
    float bcToDlrs=232.8;//Jan 13th, 2015, 10:18AM
    float erToDlr=0.849381;//Same date as bitcoin to dollars
    float ynToDlr=118.03;//Same date as bitcoin to dollars
    float bitcoin, dollars, euros, yen;
    
    //Input the number of bitcoin, then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"you wish to purchase."<<endl;
    cin>>bitcoin;
    
    //Convert to all the other currencies
    dollars=bcToDlrs*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" = "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" = "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    
    //exit stage right


    
    return 0;
}

