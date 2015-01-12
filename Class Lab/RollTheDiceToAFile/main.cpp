/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose:Illustrate file i/o and random numbers 
 * Created on January 12, 2015, 10:06 AM
 */

//system libraries
#include <cstdlib>//random rand(), srand()
#include <iostream>//keyboard monitor i/o
#include <fstream>//file i/o
#include<ctime>//time functions

using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here


int main(int argc, char** argv) {
    //Declare variables (set the random number seed)
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare a file object
    ofstream output;
    
    //Open the file
    output.open("RollTheDice.dat");
    
    //Declare five dice
    unsigned short die1, die2, die3, die4, die5;
    
    //Set the values for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    
    //Output the results
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3;
    cout<<" "<<die4<<" "<<die5<<endl;
    
    //output the results to a file
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3;
    output<<" "<<die4<<" "<<die5<<endl;
    
    //close the string
    output.close();
    
    return 0;
}

