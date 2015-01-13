/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: Babalonion Square root calculator
 * Created on January 13, 2015, 11:34 AM
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
//Declare variables
    float number, guess, r;
    //Input a number
    cout<<"Input a number to estimate its square root."<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the first pass
    cout<<"First Pass calculation -> "<<guess<<endl;
    
    //Second pass
    
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the second pass
    cout<<"Second Pass calculation -> "<<guess<<endl;
    
    //Third pass
  
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the first pass
    cout<<"Third Pass calculation -> "<<guess<<endl;
    
    //Fourth pass
    
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the first pass
    cout<<"Fourth Pass calculation -> "<<guess<<endl;
    
    //Fifth pass
    
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the first pass
    cout<<"Fifth Pass calculation -> "<<guess<<endl;
    
    //Sixth pass
   
    r=number/guess;
    guess=(guess+r)/2;
    
    //Output the first pass
    cout<<"Sixth Pass calculation -> "<<guess<<endl;
    
    //exit stage right
    return 0;
}

