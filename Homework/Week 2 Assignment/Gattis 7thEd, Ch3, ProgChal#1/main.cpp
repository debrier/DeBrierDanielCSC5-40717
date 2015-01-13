/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose:To find the MPG of a car
 * Created on January 12, 2015, 3:55 PM
 */
//system libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables
    float gas,//How many gallons of gas the car can hold
          miles,//How many miles the car can go on a full tank
          MPG;  //The milage of the car
    
    
    //Introduce user to program
    cout<<"This program calculates the miles per gallon of a motor vehicle."<<endl;
    
    //prompt for gallons the car can hold
    cout<<"Please enter how many gallons of gas the car can hold."<<endl;
    cin>>gas;
    
    //prompt for miles a car can go on a full tank
    cout<<"Please enter how many miles the car can go on a full tank."<<endl;
    cin>>miles;
    
    //Output the MPG
    MPG=miles/gas;
    
    cout<<"Your car can go "<<MPG<< " miles per gallon on a full tank of gas"<<endl;
    return 0;
}

