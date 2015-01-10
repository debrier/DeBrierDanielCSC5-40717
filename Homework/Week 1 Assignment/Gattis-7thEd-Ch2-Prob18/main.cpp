/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 * Purpose: Solution to ED problem
 * Created on January 8, 2015, 8:17 AM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent Conversion

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    short custSrv=12467; //Customers surveyed
    char perEDrk=14; //Percentage Energy Drinkers
    char perCDrk=64; //Percentage Citrus Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT; //Citrus Drinkers
    //Output Results
    cout<<"Customers surveyed that are energy drinkers ="<<endl;
    cout<<custE<<endl;
    cout<<"Customers surveyed that are citrus drinkers ="<<endl;
    cout<<custC<<endl;
    return 0;
}

