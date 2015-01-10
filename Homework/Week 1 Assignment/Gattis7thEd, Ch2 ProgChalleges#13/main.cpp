/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: To show the selling price of a circuit board after a 40% profit markup
 * Created on January 9, 2015, 9:49 PM
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
    float percentprofit=0.40;//The markup (profit) the seller is making
    float CircBprice=12.67;//The price at which the seller obtains the boards
    float profit;//How much profit seller makes on circuit board
    float sellingprice;//How much the board sells for after markup
    
    //Introduce user to program
    cout<<"This program shows the selling price of a $12.67 circuit board"<<endl;
    cout<<"after a 40% profit markup is applied."<<endl;
    
    //Determine the profit made on the circuit board
    profit=CircBprice*percentprofit;
    
    //Determine the final selling price of the circuit board
    sellingprice=CircBprice+profit;
    
    //Display the outcome to the user
    cout<<"The profit made on the circuit board is "<<profit<<" dollars."<<endl;
    cout<<"The total selling price of the board is "<<sellingprice<<" dollars"<<endl;
    
    //exit stage right
    return 0;
}

