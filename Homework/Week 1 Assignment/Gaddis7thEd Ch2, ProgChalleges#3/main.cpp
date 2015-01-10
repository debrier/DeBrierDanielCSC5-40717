/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose:To determine the sales tax on a $52 purchase.
 * Created on January 9, 2015, 6:27 PM
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
//Declare Variables
char total=52;//Total to which state and county ST will be derived
float StateST=0.04;//State sales tax %
float CountyST=0.02;//County sales tax %
float StateSTtotal;//The amount of state ST off of a $52 purchase
float CountySTtotal;//The amount of county ST off of a $52 purchase
float STtotal;//The total amount of state and county ST
float totalplusST;//The original total, plus the ST


//Describe program to user
cout<<"This program will display the amount of state and county sales tax"<<endl;
cout<<"on a $52 purchase, plus the total amount of tax, and the total + tax."<<endl;

//Calculate state sales tax
StateSTtotal=StateST*total;

//Calculate county sales tax
CountySTtotal=CountyST*total;

//Add up both sales taxes
STtotal=StateSTtotal+CountySTtotal;

//Add the total sales taxes to the original total
totalplusST=total+STtotal;

//Output the results
cout<<"The amount of State sales tax is "<<StateSTtotal<<" dollars."<<endl;

cout<<"The amount of County sales tax is "<<CountySTtotal<<" dollars."<<endl;

cout<<"The total sales tax is "<<STtotal<<" dollars."<<endl;

cout<<"The total plus the sales tax is "<<totalplusST<<" dollars."<<endl;

//exit stage right

    return 0;
}

