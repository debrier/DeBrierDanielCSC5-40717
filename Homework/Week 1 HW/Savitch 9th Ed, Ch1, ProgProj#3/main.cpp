/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: Find the numeral value of quarters, dimes, nickels in cents
 * Created on January 8, 2015, 10:10 AM
 */

#include <iostream>

using namespace std;
//user libraries

//global constants
const short quartervalue=25;//value of quarter
const short dimevalue=10;//value of dime
const short nickelvalue=5;//value of nickel
        
//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //Declare variables
    short quarter; //number of quarters
    short dime;//number of dimes
    short nickel;//number of nickels
    short totalvalue;//total value of Q,D,N
    
    //Prompt user for input
    cout<<"this program is designed to tell you the total value"<<endl;
    cout<<"of quarters, dimes, and nickels, in cents. (eg, 2 quarters,"<<endl;
    cout<<"1 dime, 1 nickel, will be displayed as 65 cents.)"<<endl;
    
    //Request user input for quarters, dimes, nickels
    cout<<"Please input quarters, dimes, and nickels (value of 1-9 only)"<<endl;
    
    cin>>quarter>>dime>>nickel;
    
    //Begin calculating total value of coins
    totalvalue=(quartervalue*quarter)+ (dimevalue*dime)+ (nickelvalue*nickel);
            
    //Output results
    cout<<"the total value of the coins are "<<totalvalue<<" cents "<<endl;
    //exit stage right
    
   
    
    
    return 0;
}

