/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: To calculate the average of five test scores using fixed point 
 * Created on January 12, 2015, 4:39 PM
 */
//System libraries
#include <iostream>
#include<iomanip>

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
    float test1,test2,test3,test4,test5;//The five tests to which we will obtain our average
    float avg; //The average of all five test scores
    
//Introduce user to program and prompt for the scores
    cout<<"This program is designed to take the average of five"<<endl;
    cout<<"different test scores and project it to the user."<<endl;
    
    cout<<"Please input scores 1-5."<<endl;
    cin>>test1 >> test2 >> test3 >> test4 >> test5;
    
    //Calculate the five score average, and output to user
    
    avg=(test1+test2+test3+test4+test5)/5; //Why doesn't this work? (Now it does?))
    //avg=static_cast<float>(test1+test2+test3+test4+test5)/5;
    
    
    //cout<<setprecision(1)<<fixed;         
    cout<<"The average test score is "<< avg <<endl; //This seems to work...           
    
    return 0;
}

